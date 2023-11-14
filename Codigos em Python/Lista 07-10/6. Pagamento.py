
valor = float(input("Digite o valor do produto da etiqueta:"))
print("Qual a forma de pagamento?")
print("Digite 1 para pix")
print("Digite 2 para cartao de debito")
print("Digite 3 para a vista cartao de cretido")
a = float(input("Digite 4 para parcelado cartao de cretido :"))
if(a==1):
    print(f"Voce escolheu pix recebeu 10 porcento de desconto, o valor final ficou: ", valor - valor * 10/100)

elif(a==2):
    print(f"Voce escolheu cartao de debito  recebeu 5 porcento de desconto, o valor final ficou:", valor - valor * 5/100)

elif(a==3):
    print("Voce escolheu vista cartao de cretido recebeu 2 porcento de desconto, o valor final ficou:", valor - valor * 2/100)

elif(a==4):
    print("Voce escolheu parcelado, o valor final ficou:", valor)

else:
    print("opcao invalida")
