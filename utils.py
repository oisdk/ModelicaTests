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