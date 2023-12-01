pares = 0
for numero in range(8):
    numero = int(input("Digite um valor"))
    if numero % 2 == 0: 
        pares = pares +1
print(f"a soma dos pares é: ", pares)