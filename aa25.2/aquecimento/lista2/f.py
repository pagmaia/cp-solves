def testesparabolas(coeficientesparabolas, coeficienteslinhas):
    for coeficiente in coeficientesparabolas:
        a = coeficiente[0]
        b = coeficiente[1]
        c = coeficiente[2]
        ini = 0
        fim = len(coeficienteslinhas) - 1
        resposta = 0
        while ini <= fim:
            mid = ini + (fim - ini) // 2

            if coeficienteslinhas[mid] < b:
                resposta = mid
                ini = mid + 1

            else:
                fim = mid - 1

        if resposta < len(coeficienteslinhas) and (coeficienteslinhas[resposta] - b) * (coeficienteslinhas[resposta] - b) < 4 * a * c:
            print("YES")
            print(coeficienteslinhas[resposta])
            continue

        if resposta < len(coeficienteslinhas) - 1 and (coeficienteslinhas[resposta + 1] - b) * (coeficienteslinhas[resposta + 1] - b) < 4 * a * c:
            print("YES")
            print(coeficienteslinhas[resposta + 1])
            continue

        print("NO")

testes = int(input())

for i in range(testes):
    nlinhas, nparabolas = map(int, input().split())
    coeficienteslinhas = []
    coeficientesparabolas = []
    for i in range(nlinhas):
        coeficienteslinhas.append(int(input()))

    for i in range(nparabolas):
        a, b, c = map(int, input().split())
        coeficientesparabolas.append((a, b, c))

    coeficienteslinhas = sorted(coeficienteslinhas)
    testesparabolas(coeficientesparabolas, coeficienteslinhas)
    print()

     