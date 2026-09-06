def skibidus(palavra):
    while len(palavra) > 1:
        operacao = False
        for i in range(len(palavra) - 1):
            if palavra[i] == palavra[i + 1]:
                if len(palavra) == 2:
                    return len(palavra) - 1
                
                if i == 0:
                    palavra[i] = palavra[i + 2]

                else:
                    palavra[i] = palavra[i - 1]

                palavra.pop(i + 1)
                operacao = True
                break

        if not operacao:
            return len(palavra)

    return len(palavra)

testes = int(input())

for teste in range(testes):

    palavra = input()
    palavra = list(palavra)
    print(skibidus(palavra))