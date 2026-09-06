def solve(precos, limite):
        
    if limite >= precos[-1]:
        print(len(precos))
        return

    elif limite < precos[0]:
        print(0)
        return

    ini = 0
    fim = len(precos) - 1
    while(ini <= fim):
        mid = ini + (fim - ini) // 2

        if limite >= precos[mid]:
            resposta = mid
            ini = mid + 1

        else:
            fim = mid - 1

    print(resposta + 1)

lojas = int(input())
precos = list(map(int, input().split()))
dias = int(input())
precos = sorted(precos)

for i in range(dias):
    limite = int(input())
    solve(precos, limite)




        


