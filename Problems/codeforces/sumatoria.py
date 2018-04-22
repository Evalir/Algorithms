import math

def sumatoria():
    N = raw_input()
    suma = N*(N+1)/2
    print suma

def hipotenusa():
    c1 = raw_input()
    c2 = raw_input()
    if c1 <= 0 or c2 <= 0:
        print "Input invalido"
        return
    hip = math.sqrt(c1*c1 + c2*c2)
    print hip

def parImpar():
    x = raw_input()
    if x % 2 == 0:
        print x, " es par"
    else:
        print x, " es impar"


