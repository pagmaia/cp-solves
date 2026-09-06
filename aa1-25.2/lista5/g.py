import math

def quadradoperfeito(num):
    return num == math.isqrt(num) ** 2

quantidade = int(input())
numeros = list(map(int, input().split()))

maximo = max(numeros)
tamanho = math.isqrt(maximo) + 1

crivo = [False] * tamanho
crivo[0] = True
crivo[1] = True

for i in range(2, math.isqrt(tamanho) + 1):
    if not crivo[i]:
        for j in range(i * i, tamanho, i):
            crivo[j] = True

for num in numeros:
    if quadradoperfeito(num) and not crivo[math.isqrt(num)] and num > 1:
        print("YES")
    else:
        print("NO")
        
    

    
    