import math

def piramide(crivo, numero):
    linha = 2
    coluna = 1
    limite = 2
    elementos = {2 : (1, 1)}

    for i in range(3, numero + 1, 2):
        if not crivo[i]:
            elementos[i] = (linha, coluna)
            if coluna == limite:
                linha += 1
                limite += 1
                coluna = 1
            else:
                coluna += 1
    
    return elementos

testes = int(input())

tamanho = 100000001
crivo = bytearray([0]) * tamanho
crivo[0] = 1
crivo[1] = 1

for i in range(4, tamanho, 2):
    crivo[i] = 1

for i in range(3, math.isqrt(tamanho), 2):
    if not crivo[i]:
        for j in range(i * i, tamanho, i):
            crivo[j] = 1

piram = {}

for i in range(testes):
    numero = int(input())
    if crivo[numero]:
        print(-1)
    else:
        if(piram.get(numero)) is None:
            piram = piramide(crivo, numero)

        print(piram[numero][0], piram[numero][1])

        