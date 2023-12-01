
salario = float(input("Qual seu salario:")) 
anos = int(input("Quantos anos vc ja trabalhou na empresa:"))

if anos >= 5 :
    a = salario*25/100
    print("Seu bonus é de : ", a) 
else : 
    b = salario*10/100
    print("Seu bonus é de : ", b) 
