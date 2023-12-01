saldo_conta = 0.0
senha_tentativa = 0
tentativas = 0
senha_cadastro = 0

def depositar(valor_deposito):
    global saldo_conta
    saldo_conta += valor_deposito

def extrato():
    global saldo_conta, senha_cadastro, tentativas

    while True:
        senha_tentativa = int(input("Digite a sua senha: "))
        tentativas += 1

        if senha_cadastro == senha_tentativa:
            print("O saldo é: %.2f" % saldo_conta)
            break
        elif tentativas == 3:
            print("Senha inválida, sua conta foi bloqueada.")
            return

        print("Senha inválida")

def sacar():
    global saldo_conta, senha_cadastro, tentativas

    while True:
        senha_tentativa = int(input("Digite a sua senha: "))
        tentativas += 1

        if senha_cadastro == senha_tentativa:
            valor_saque = float(input("Digite o valor a ser sacado: "))

            if valor_saque <= saldo_conta:
                saldo_conta -= valor_saque
            else:
                print("Saldo insuficiente.")
        elif tentativas == 3:
            print("Senha inválida, sua conta foi bloqueada.")
            return
        else:
            print("Senha inválida")

if __name__ == "__main__":
    senha_cadastro = int(input("Cadastre uma senha: "))

    while True:
        print("\nDigite 1 para DEPOSITAR")
        print("Digite 2 para EXTRATO")
        print("Digite 3 para SACAR")
        print("Digite -1 para SAIR")
        operacao = int(input("Escolha a operacao: "))

        if operacao == 1:
            valor = float(input("Digite o valor do depósito: "))
            depositar(valor)
        elif operacao == 2:
            extrato()
        elif operacao == 3:
            sacar()
        elif operacao == -1:
            print("Saindo do sistema.")
            break
        else:
            print("Operação inválida.")
