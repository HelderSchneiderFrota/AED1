p = int(input("Quantas pessoas na cidade: "))
contador = 0
HLC = 0
MAP = 0
maior = 0
soma = 0

while True:
    if contador == p:
        break
    contador += 1
    print(f"{contador}ª pessoa")
    sexo = input("Qual seu sexo? M para Masculino e F para feminino: ")
    olhos = input("Qual a cor dos seus olhos? A para Azul, C para castanho e V para verde: ")
    cabelo = input("Qual a cor do seu cabelo? L para Louro, C para castanho, R para ruivo e P para preto: ")
    idade = int(input("Qual sua idade: "))

    if sexo == 'M' and olhos == 'C' and cabelo == 'L' and 20 <= idade <= 25:
        HLC += 1

    if sexo == 'F' and olhos == 'A' and cabelo == 'P' and 34 <= idade <= 41:
        MAP += 1

    soma += idade
    if idade > maior:
        maior = idade

if contador > 0:
    media = soma / contador

print(f"\nA maior idade é: {maior:.1f}")
print(f"A média das idades é: {media:.2f}")
print(f"Homens Loiros e olhos castanhos na idade entre 20 a 25 anos: {HLC}")
print(f"Mulheres com olhos Azuis e cabelo preto com idade entre 34 a 41 anos: {MAP}")
