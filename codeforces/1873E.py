def coraisfora(alturas, tentativa):
    ini = 0
    fim = len(alturas) - 1
    ind = 0
    contador = 0
    while ini <= fim:
        mid = ini + (fim - ini) // 2

        if alturas[mid] > tentativa:
            ind = mid
            fim = mid - 1

        else:
            ini = mid + 1

    for i in range(ind, len(alturas)):
        contador += alturas[i] - tentativa
        
    return contador

testes = int(input())

for i in range(testes):
    colunascoral, quantidadeagua = map(int, input().split())
    alturas = map(int, input().split())
    alturas = sorted(alturas)
    somadasalturas = sum(alturas)
    ini = 1
    fim = 10000000000000
    resposta = 0

    while ini <= fim:
        mid = ini + (fim - ini) // 2

        if mid >= alturas[-1]:
            capacidade = mid * colunascoral - somadasalturas
        else:
            capacidade = mid * colunascoral - (somadasalturas - coraisfora(alturas, mid))

        if capacidade <= quantidadeagua:
            resposta = mid
            ini = mid + 1

        else:
            fim = mid - 1

    print(resposta)