noperacoes = int(input())
logado = False
nauths = 0

for teste in range(noperacoes):
    operacao = input()

    if operacao == "login":
        logado = True

    if operacao == "logout":
        logado = False

    if operacao == "private":
        if not logado:
            nauths += 1

print(nauths)
