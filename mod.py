from subprocess import check_call
check_call(["omc", "script.mos"])
with open("PipesValveDiscrete_res.csv") as file:
    table = [[float(n) for n in row.split(",")] for row in file.read().split("\n")[1:-1]]
    print(table)