testes = int(input())

def solve(riqueza, populacao):
    ini = 0
    fim = 2 * populacao * max(riqueza)
    resposta = 0
    while ini <= fim:
        mid = ini + (fim - ini) // 2
        media = (sum(riqueza) + mid) / populacao
        limite = media / 2
        tristes = 0

        for valor in riqueza:
            if valor < limite:
                tristes += 1
        
        if tristes > populacao // 2:
            resposta = mid
            fim = mid - 1

        else:
            ini = mid + 1

    print(resposta)  

for i in range(testes):
    populacao = int(input())
    riqueza = list(map(int, input().split()))
    
    if len(list(riqueza)) < 3:
        print(-1)

    else:
        solve(riqueza, populacao)