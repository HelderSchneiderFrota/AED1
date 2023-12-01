negativos = 0
for numeros in range(10): 
    numeros = int(input("Digite o valor: "))
    if numeros < 0 :
        negativos = negativos + 1
    

print(f"A quantidade de numeros negativos é: {negativos}")
