
A = int(input("Primeira nota:"))

B = int(input("Segunda nota:"))

C = int(input("Terceira nota:"))

if (A % 2 == 0) :

    peso1 = 5.5 

else :
    peso1 = 4.5


if (B % 2 == 0):

    peso2 = 5.5


else :
    peso2 = 4.5


if (C % 2 == 0):

    peso3 = 5.5


else :
    peso3 = 4.5



mediaP = (A * peso1 ) + (B * peso2) + (C * peso3)
mediaP = ( mediaP / (peso1 + peso2 + peso3))

print ("SUA MEDIA eh: ", mediaP)





