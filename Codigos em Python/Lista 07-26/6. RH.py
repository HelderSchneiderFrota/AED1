
contador=0
soma = 0
valor = float(input("Digite um valor: "))

while (valor != -1) :

    contador = contador + 1
    soma = soma + valor 
    valor = float(input("Digite um valor: "))
    
media = soma/contador
print(f"A media eh: {media} e o total da folha eh {soma}")
