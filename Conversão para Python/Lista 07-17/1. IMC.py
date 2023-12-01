print("Vamos calular seu IMC?")
A = float(input("Qual sua altura:"))
B = float(input("Qual seu peso:"))
c =  B /( A * A )

print(f"Seu IMC eh: ", c)

if (c <= 17 ):
    print("Muito baixo do peso")

elif(c <= 18.49):
    print("Abaixo do peso")

elif(c <= 24.49):

    print("peso normal")

elif(c <=29.99) :
    print("acima do peso peso")

elif(c <= 34.99) :
    print("Obesidade 1")

elif(c <= 39.99) :
    print("obesidade 2")

else :
    print("Obesidade morbida")