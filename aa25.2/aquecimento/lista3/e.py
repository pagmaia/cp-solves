tamanho = int(input())
playlist = list(map(int, input().split()))

frequencia = {}
inicio = 0
resposta = 0

for i in range(tamanho):
    if playlist[i] not in frequencia:
        frequencia[playlist[i]] = i

    else:
        if frequencia[playlist[i]] >= inicio:
            inicio = frequencia[playlist[i]] + 1

        frequencia[playlist[i]] = i
    
    resposta = max(resposta, i - inicio + 1)

print(resposta)
        



