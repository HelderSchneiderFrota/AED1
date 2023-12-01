
print("O posto parada obrigatoria esta com promocao!!")
print("Digite 1 para alcool")
print("Digite 2 para gasolina")
a = int(input("Digite 3 para diesel: "))

if (a==1) :
    print("Voce escolheu alcool")
    alcool =float(input("Qual é a quantidade de litros de alcool:"))
    if (alcool <= 10):
        alcool = ((alcool-(alcool*0.03))*4.5)
        print(f"O valor do alcool com desconto é:{alcool}" )
    else:
        alcool = ((alcool-(alcool*0.05))*4.5)
        print(f"O valor do alcool com desconto é:{alcool}")

elif (a==2):
    print("Voce escolheu gasolina")
    gaso = float(input("Qual é a quantidade de litros de gasolina:"))
    if (gaso <= 15) :
        gaso = ((gaso-(gaso*0.01))*5.1)
        print(f"O valor do gasolina com desconto é:{gaso}")
    else:
        gaso= ((gaso-(gaso*0.04))*5.1)
        print(f"O valor do gasolina com desconto é:{gaso}")
elif(a==3) :
    print("Voce escolheu diesel")
    diesel = float(input("Qual é a quantidade de litros de diesel:"))
    if (diesel <= 20):
        diesel= (((diesel-diesel*0.03))*5.25)
        print(f"O valor do diesel com desconto é:{diesel}")
    
    else:
        diesel= (((diesel-diesel*0.06))*5.25)
        print(f"O valor do diesel com desconto é: {diesel}")
    
else:
    print("opcão invalida")

