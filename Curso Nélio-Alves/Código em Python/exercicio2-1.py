# Coletando valores do usuário
val = input()

# Tratar valores pegos
vet = val.split()

# Instanciando variável de preço
price = 0

# Coletando código do item
cod = int(vet[0])

# Coletando quantidade do item
qty = int(vet[1])

# Selecionando preço
if cod==1:
    price = 4.00
else:
    if cod==2:
        price = 4.50
    else:
        if cod==3:
            price = 5.00
        else:
            if cod==4:
                price = 2.00
            else:
                if cod==5:
                    price = 1.50
                else:
                    print("Codigo de produto não encontrado ou produto não existe!")

# Imprimindo valor total
print("Total: R$ {:.2f}".format(price*qty))