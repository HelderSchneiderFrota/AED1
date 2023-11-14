somatotal = 0
D = 0
P = 0
C = 0

for i in range(1, 11):
    a = input("Qual a forma de pagamento? C - cartão; P - pix; D - dinheiro: ")

    if a == 'D':
        v = float(input(f"Qual o valor do {i}º valor: "))
        somatotal += v
        D += v
    elif a == 'P':
        v = float(input(f"Qual o valor do {i}º valor: "))
        somatotal += v
        P += v
    elif a == 'C':
        v = float(input(f"Qual o valor do {i}º valor: "))
        somatotal += v
        C += v

print(f"A soma de todas transações é: {somatotal:.1f}")
print(f"Compras pagas no cartão: {C:.1f}")
print(f"Compras pagas no PIX: {P:.1f}")
print(f"Compras pagas em dinheiro em espécie: {D:.1f}")
