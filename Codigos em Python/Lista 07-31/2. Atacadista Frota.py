print("\n")
print("            Atacadista Frota: ")
print("(79001) Sabonete              = 02.10  R$ ou 01.95  R$ para 3 ou mais")
print("(79002) Pão de forma          = 08.39  R$ ou 08.20  R$ para 2 ou mais")
print("(79003) Macarrão T. Espaguete = 04.21  R$ ou 03.99  R$ para 4 ou mais")
print("(79004) Óleo de soja          = 04.99  R$ ou 04.80  R$ para 3 ou mais")
print("(79005) Arroz 5kg             = 21.00  R$ ou 19.85  R$ para 2 ou mais")
print("(79006) Feijão 1Kg            = 05.99  R$ ou 05.55  R$ para 5 ou mais")
print("(79007) Milho de pipoca       = 02.15  R$ ou 01.99  R$ para 7 ou mais")

A = input("Você possui o cartão da loja? Digite S para Sim e N para Não: ")
preco = 0

while True:
    print("Digite o Código referente ao produto")
    codigo = int(input())
    
    if codigo < 0:
        break

    print("Qual a quantidade:")
    quantidade = int(input())

    if A == 'S':
        if codigo == 79001:
            print(f"Sabonete * {quantidade}")
            preco += 1.95 * quantidade
        elif codigo == 79002:
            print(f"Pão de forma * {quantidade}")
            preco += 8.20 * quantidade
        elif codigo == 79003:
            print(f"Macarrão T. Espaguete * {quantidade}")
            preco += 3.99 * quantidade
        elif codigo == 79004:
            print(f"Óleo de soja * {quantidade}")
            preco += 4.80 * quantidade
        elif codigo == 79005:
            print(f"Arroz 5kg * {quantidade}")
            preco += 19.85 * quantidade
        elif codigo == 79006:
            print(f"Feijão 1Kg * {quantidade}")
            preco += 5.55 * quantidade
        elif codigo == 79007:
            print(f"Milho de pipoca * {quantidade}")
            preco += 1.99 * quantidade
    elif A == 'N':
        if codigo == 79001:
            if quantidade >= 3:
                print(f"Sabonete * {quantidade}")
                preco += 1.95 * quantidade
            else:
                print(f"Sabonete * {quantidade}")
                preco += 2.10 * quantidade
        elif codigo == 79002:
            if quantidade >= 2:
                print(f"Pão de forma * {quantidade}")
                preco += 8.20 * quantidade
            else:
                print(f"Pão de forma * {quantidade}")
                preco += 8.39 * quantidade
        elif codigo == 79003:
            if quantidade >= 4:
                print(f"Macarrão T. Espaguete * {quantidade}")
                preco += 3.99 * quantidade
            else:
                print(f"Macarrão T. Espaguete * {quantidade}")
                preco += 4.21 * quantidade
        elif codigo == 79004:
            if quantidade >= 3:
                print(f"Óleo de soja * {quantidade}")
                preco += 4.80 * quantidade
            else:
                print(f"Óleo de soja * {quantidade}")
                preco += 4.99 * quantidade
        elif codigo == 79005:
            if quantidade >= 2:
                print(f"Arroz 5kg * {quantidade}")
                preco += 19.85 * quantidade
            else:
                print(f"Arroz 5kg * {quantidade}")
                preco += 21.00 * quantidade
        elif codigo == 79006:
            if quantidade >= 5:
                print(f"Feijão 1Kg * {quantidade}")
                preco += 5.55 * quantidade
            else:
                print(f"Feijão 1Kg * {quantidade}")
                preco += 5.99 * quantidade
        elif codigo == 79007:
            if quantidade >= 7:
                print(f"Milho de pipoca * {quantidade}")
                preco += 1.99 * quantidade
            else:
                print(f"Milho de pipoca * {quantidade}")
                preco += 2.15 * quantidade

print(f"O valor total é: {preco:.2f}")
