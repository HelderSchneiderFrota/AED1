print("Seja bem vindo a PVagri")
print("Confira os preços para pulverização de lavouras por tipo de pestes")
print("(Tipo 1) Lagartas     =  75.00 R$ por metro quadrado")
print("(Tipo 2) Gafanhotos   =  98.00 R$ por metro quadrado")
print("(Tipo 3) Ferrugem     = 108.00 R$ por metro quadrado")
print("(Tipo 4) Todos acima  = 202.00 R$ por metro quadrado")

Codigo = int(input("Digite o Tipo referente ao serviço: "))
quantidade = float(input("Digite a quantidade de metros quadrados: "))

preco = 0
A = 0
B = 0
C = 0

if Codigo == 1:
    print(f"Você escolheu {quantidade:.2f} metros quadrados para a pulverização contra Lagartas")
    preco = quantidade * 75.00
    print(f"O valor ficou {preco:.2f} R$")
    if quantidade > 500:
        preco = preco - (preco * 0.05)
        print(f"Você ganhou um desconto, então o valor ficou {preco:.2f} R$")
    if preco > 50000:
        A = preco - 50000
        B = A * 0.15
        C = B - preco
        print(f"Mas ganhou outro desconto, então ficou {C:.2f} R$")
elif Codigo == 2:
    print(f"Você escolheu {quantidade:.2f} metros quadrados para a pulverização contra Gafanhotos")
    preco = quantidade * 98.00
    print(f"O valor ficou {preco:.2f} R$")
    if quantidade > 500:
        preco = preco - (preco * 0.05)
        print(f"Você ganhou um desconto, então o valor ficou {preco:.2f} R$")
    if preco > 50000:
        A = preco - 50000
        B = A * 0.15
        C = B - preco
        print(f"Mas ganhou outro desconto, então ficou {C:.2f} R$")
elif Codigo == 3:
    print(f"Você escolheu {quantidade:.2f} metros quadrados para a pulverização contra Ferrugem")
    preco = quantidade * 108.00
    print(f"O valor ficou {preco:.2f} R$")
    if quantidade > 500:
        preco = preco - (preco * 0.05)
        print(f"Você ganhou um desconto, então o valor ficou {preco:.2f} R$")
    if preco > 50000:
        A = preco - 50000
        B = A * 0.15
        C = B - preco
        print(f"Mas ganhou outro desconto, então ficou {C:.2f} R$")
elif Codigo == 4:
    print(f"Você escolheu {quantidade:.2f} metros quadrados para a pulverização contra Todas as pestes")
    preco = quantidade * 202.00
    print(f"O valor ficou {preco:.2f} R$")
    if quantidade > 500:
        preco = preco - (preco * 0.05)
        print(f"Você ganhou um desconto, então o valor ficou {preco:.2f} R$")
    if preco > 50000:
        A = preco - 50000
        B = A * 0.15
        C = B - preco
        print(f"Mas ganhou outro desconto, então ficou {C:.2f} R$")
else:
    print("Valores inválidos")

