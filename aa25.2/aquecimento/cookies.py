numerocaixas, dias = map(int, input().split())

caixas = input()

if len(caixas) == numerocaixas:
    caixasvazias = 0
    caixascookies = 0
    for caixa in caixas:
        if caixa == ".":
            caixasvazias += 1

        elif caixa == "@":
            caixascookies += 1

    if caixascookies > dias:
        caixasvazias += dias

    else:
        caixasvazias += caixascookies

    print(caixasvazias)