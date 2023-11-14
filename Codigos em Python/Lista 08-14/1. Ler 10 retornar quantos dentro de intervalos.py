c1=0
c2=0
c3=0
for i in range(10) :
    n = int(input("Digite um numero: "))
    if n<5 or n>15 :
        c1= c1 +1
            
    if n<32 or n>45:
        c2= c2+ 1
                
    else :
        c3=c3+1
                     
print(f"Possui {c1} numeros no intervalo de 5 a 15")
print(f"Possui {c2} numeros no intervalo de 32 a 45")
print(f"Possui {c3} numeros no fora dos intervalos previstos acima")

