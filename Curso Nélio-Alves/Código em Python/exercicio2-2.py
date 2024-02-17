from cmath import sqrt
# Pegar informações da equação
val = input()

# Tratar valores pegos
vet = val.split()

# Coletando valor A
a = float(vet[0])

# Coletando valor B
b = float(vet[1])

# Coletando valor C
c = float(vet[2])

if a==0:
    print("Impossivel calcular")
else:
    delta = pow(b, 2) - (4*a*c)
    if delta < 0:
        print("Impossivel calcular")
    else:
        r1 = ((-b) + sqrt(delta))/(2*a)
        print("X1 = {:.5f}".format(r1.real))
        r2 = ((-b) - sqrt(delta))/(2*a)
        print("X2 = {:.5f}".format(r2.real))
