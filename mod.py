from pickle import dump
from subprocess import check_call
check_call(["omc", "script.mos"])
with open("PipesValveIncompressible_res.csv") as file:
    table = [[float(n) for n in row.split(",")] for row in file.read().split("\n")[1:-1]]
    with open('myfile.dat', 'w+') as file:
        dump(table,file,2)