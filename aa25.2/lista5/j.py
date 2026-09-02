import math
testes = int(input())

tamanho = 10000000
crivo = [False] * tamanho
linha = 2
coluna = 1
piram = {2 : (1, 1)}

crivo[2::2] = [True] * len(crivo[2::2])

for i in range(3, int(1 + tamanho**0.5), 2):
    if not crivo[i]:
        crivo[i * i:: 2 * i] = [True] * len(crivo[i * i:: 2* i])
        
for i in range(3, tamanho, 2):
    if not crivo[i]:
        piram[i] = (linha, coluna)

        if coluna == linha:
            linha += 1
            coluna = 1

        else:
            coluna += 1

for i in range(testes):
    numero = int(input())
    
    if crivo[i]:
        print(-1)
    else:
        print(piram[numero][0], piram[numero][1])
        