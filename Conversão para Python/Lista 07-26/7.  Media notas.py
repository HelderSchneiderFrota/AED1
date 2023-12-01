
contador=0
soma= 0

while 1 :
    
    media = float(input("Digite um valor: "))

    if (media < 0) :
        break
    contador = contador + 1

    if (contador == 1) :
        maior = media
        menor = media
    else :
        if (media > maior) :
            maior = media
            if (media < menor) :
                menor = media
            
    soma += media
    if (contador > 0) :
        mediaT = soma / contador

print(f"A media eh: {mediaT} a menor nota eh {menor} a maior eh: {maior}")


