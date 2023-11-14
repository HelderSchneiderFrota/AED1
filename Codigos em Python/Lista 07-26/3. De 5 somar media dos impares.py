
i=1
n=0
m=0
while i <= 5 :
    a = int(input("Informe um numero: "))
    if (a % 2 != 0):
        n = n + a
        m = m +1
    
    i=i+1
print("a media dos impares eh: ", n/m)

