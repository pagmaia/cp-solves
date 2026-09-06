import math

numero = int(input())

if numero < 6:
    print(0)
    exit()

crivo = [False] * (numero + 1)
resposta = 0

for i in range(2, int(math.sqrt(numero)) + 1):
    if not crivo[i]:      
        for j in range(i * i, numero, i):
            crivo[j] = True

for i in range(6, numero + 1):
    contador = 0
    for j in range(2, (i // 2) + 1):
        if not crivo[j] and i % j == 0:
            contador += 1

        if contador > 2:
            break
        
    if contador == 2:
        resposta += 1

print(resposta)














