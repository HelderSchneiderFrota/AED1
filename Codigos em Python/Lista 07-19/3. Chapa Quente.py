print("Seja bem vindo a lanchonete")
print("                               CHAPA QUENTE ")
print("\n")
print("            Cardapio: ")
print("(200) Baguncinha        = 21.80 R$")
print("(201) Bagunca caseiro   = 28.90 R$")
print("(202) X salada          = 18.20 R$")
print("(203) Bauru simples     = 15.90 R$")
print("(204) Refrigerante lata = 06.00 R$")
print("(205) Agua mineral      = 04.00 R$")

Codigo = int(input("Digite o Codigo referente ao lanche: "))
quantidade = int(input("Digite a quantidade: "))

preco = 0

if Codigo == 200:
    print(f"Você escolheu {quantidade} Baguncinha")
    preco = quantidade * 21.80
    print(f"O valor total é {preco:.2f} R$")
elif Codigo == 201:
    print(f"Você escolheu {quantidade} Bagunca caseiro")
    preco = quantidade * 28.90
    print(f"O valor total é {preco:.2f} R$")
elif Codigo == 202:
    print(f"Você escolheu {quantidade} X salada")
    preco = quantidade * 18.20
    print(f"O valor total é {preco:.2f} R$")
elif Codigo == 203:
    print(f"Você escolheu {quantidade} Bauru simples")
    preco = quantidade * 15.90
    print(f"O valor total é {preco:.2f} R$")
elif Codigo == 204:
    print(f"Você escolheu {quantidade} Refrigerante lata")
    preco = quantidade * 6.00
    print(f"O valor total é {preco:.2f} R$")
elif Codigo == 205:
    print(f"Você escolheu {quantidade} Agua mineral")
    preco = quantidade * 4.00
    print(f"O valor total é {preco:.2f} R$")
else:
    print("O codigo digitado não é valido")
