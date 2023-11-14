
print("            Laboratorio: ")
print("(501) Hemograma completo = 28.97 R$")
print("(502) Colesterol         = 22.87 R$")
print("(503) Creatinina e ureia = 23.74 R$")
print("(504) Glicemia           = 19.74 R$")
print("(505) Triglicerideos     = 26.22 R$")
print("(506) Transaminases      = 33.47 R$")
print("(507) Acido urico        = 29.99 R$")

codigo = int(input("Digite o Codigo referente ao exame: "))
A = input("Você possui planos? Digite 'S' para sim e 'N' para não: ")

preco = 0

if codigo == 501:
    if A == "N":
        print("Você escolheu Hemograma completo 1")
        preco = 28.97
        print(f"O valor total é {preco:.2f} R$")
    else:
        print("Você escolheu Hemograma completo 2")
        preco = 28.97 - (28.97 * 15/100)
        print(f"O valor total é {preco:.2f} R$")
elif codigo == 502:
    if A == "N":
        print("Você escolheu Colesterol")
        preco = 22.87
        print(f"O valor total é {preco:.2f} R$")
    else:
        print("Você escolheu Colesterol 2")
        preco = 22.87 - (22.87 * 15/100)
        print(f"O valor total é {preco:.2f} R$")
elif codigo == 503:
    if A == "N":
        print("Você escolheu Creatinina e ureia")
        preco = 23.74
        print(f"O valor total é {preco:.2f} R$")
    else:
        print("Você escolheu Creatinina e ureia 2")
        preco = 23.74 - (23.74 * 15/100)
        print(f"O valor total é {preco:.2f} R$")
elif codigo == 504:
    if A == "N":
        print("Você escolheu Glicemia")
        preco = 19.74
        print(f"O valor total é {preco:.2f} R$")
    else:
        print("Você escolheu Glicemia 2")
        preco = 19.74 - (19.74 * 15/100)
        print(f"O valor total é {preco:.2f} R$")
elif codigo == 505:
    if A == "N":
        print("Você escolheu Triglicerideos")
        preco = 26.22
        print(f"O valor total é {preco:.2f} R$")
    else:
        print("Você escolheu Triglicerideos 2")
        preco = 26.22 - (26.22 * 15/100)
        print(f"O valor total é {preco:.2f} R$")
elif codigo == 506:
    if A == "N":
        print("Você escolheu Transaminases")
        preco = 33.47
        print(f"O valor total é {preco:.2f} R$")
    else:
        print("Você escolheu Transaminases 2")
        preco = 33.47 - (33.47 * 15/100)
        print(f"O valor total é {preco:.2f} R$")
elif codigo == 507:
    if A == "N":
        print("Você escolheu ácido úrico")
        preco = 29.99
        print(f"O valor total é {preco:.2f} R$")
    else:
        print("Você escolheu ácido úrico 2")
        preco = 29.99 - (29.99 * 15/100)
        print(f"O valor total é {preco:.2f} R$")
else:
    print("Código inválido.")

