testes = int(input())

for i in range(testes):
    nsteps, queries = map(int, input().split())
    alturas = list(map(int, input().split()))
    pernas = map(int, input().split())
    prefixsum = []
    prefixmax = []
    respostafinal = []
    count = 0
    for i in range(len(alturas)):
        count += alturas[i]
        prefixsum.append(count)
        if i == 0:
            prefixmax.append(alturas[i])

        else:
            prefixmax.append(max(prefixmax[-1], alturas[i]))

    for tamanhoperna in pernas:
        ini = 0
        resposta = 0
        fim = len(prefixmax) - 1
        while ini <= fim:
            mid = ini + (fim - ini) // 2

            if tamanhoperna >= prefixmax[mid]:
                resposta = prefixsum[mid]
                ini = mid + 1

            else:
                fim = mid - 1

        respostafinal.append(resposta)

    for resposta in respostafinal:
        print(resposta, end = " ")

    print()





        
