
import numpy as np
from scipy.stats import norm
from scipy.stats import uniform

def swapVar(model, varName, varVal):

    import fileinput 

    for line in fileinput.input(model + ".mo", inplace=1):
        try:
            print(line[: (line.index(varName) + len(varName))] + "=" + str(varVal) + ("," if "," in line else ""))
        except:
            print(line),
            
def makeScript(model, stopTime, variable):
    with open(model + ".mos", "w") as modScript:
        modScript.write("loadModel(Modelica);\n")
        modScript.write("loadFile(\"" + model + ".mo\");\n")
        modScript.write("simulate(" + model + ", outputFormat=\"csv\", stopTime=" + str(stopTime) + ", variableFilter=\"" + str(variable) + "\");\n")
        modScript.write("plot(" + variable + ");")
        
def runSim(model):
    
    from subprocess import check_call
    
    check_call(["omc", model + ".mos"])
    with open(model + "_res.csv") as file:
        return np.atleast_2d([[float(n) for n in row.split(",")] for row in file.read().split("\n")[1:-1]])


def my_simulation(v):

    time = v["time"]
    
    model = "PipesValveLinear"
    
    if int(time) == 0:
        makeScript("PipesValveIncompressible", 30, "tank2.level")
        swapVar("PipesValveIncompressible", "duration", 20)
        return runSim("PipesValveIncompressible")
    else:
        makeScript(model, 30, "tank2.level")
        swapVar(model, "duration", time)
        return runSim(model)

def my_prior(par, func=False):
    """
    Flat prior.
    If func=False returns a random number beteween 
    par[0] and par[1]. 

    Otherwise, returns the corresponding uniform 
    distribution function. 

    input: par -> dictionary of input parameters
    
    output: scalar (if func=False)
            uniform function (if func=True)
    """

    gap = par['max'] - par['min']
    pdf = uniform(loc=par['min'], scale=gap)

    if func == False :
        draw = pdf.rvs()
        return draw
    else:
        return pdf

def my_distance(d2, p):
    """
    Distance between observed and simulated catalogues. 

    input: d2 -> array of simulated catalogue
           p -> dictonary of input parameters

    output: list of 1 scalar (distance)
    """

    mean_obs = np.mean(p['dataset1'])
    std_obs = np.std(p['dataset1'])

    gmean = abs((mean_obs - np.mean(d2))/mean_obs)
    gstd = abs((std_obs - np.std(d2))/std_obs)

    rho = gmean + gstd


    return np.atleast_1d(rho)
