def macacos(cadeirasporlinha, preflinha1, preflinha2, semlinha):
    totalcadeiras = cadeirasporlinha * 2
    sentados = 0

    if preflinha1 > cadeirasporlinha:
        sentados += cadeirasporlinha
    else:
        sentados += preflinha1

    if preflinha2 > cadeirasporlinha:
        sentados += cadeirasporlinha
    else:
        sentados += preflinha2

    restante = totalcadeiras - sentados

    if semlinha > restante:
        sentados += restante
    else:
        sentados += semlinha

    return sentados

ntestes = int(input())

for i in range(ntestes):
    cadeirasporlinha, preflinha1, preflinha2, semlinha = map(int, input().split())

    print(macacos(cadeirasporlinha, preflinha1, preflinha2, semlinha))
