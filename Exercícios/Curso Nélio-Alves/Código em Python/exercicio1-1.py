# Pegar informações da peça 1
val = input()

# Tratar valores pegos
vet = val.split()

# Informações peça 1 com conversão de tipos
cod1 = int(vet[0])
num1 = int(vet[1])
val1 = float(vet[2])

# Pegar informações da peça 2 como string
val = input()

# Tratar valores pegos
vet = val.split()

# Informações peça 2 com conversão de tipos
cod2 = int(vet[0])
num2 = int(vet[1])
val2 = float(vet[2])

# Valor peça 1
total1 = val1 * num1

# Valor peça 2
total2 = val2 * num2

# Valor a ser pago
total = total1 + total2

print("VALOR A PAGAR: R$ {:.2f}".format(total))