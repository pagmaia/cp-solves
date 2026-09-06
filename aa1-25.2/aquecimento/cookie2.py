numerocaixas, dias = map(int, input().split())

caixas = input()
caixaslista = []
comidos = 0

if len(caixas) == numerocaixas:
    for caractere in caixas:
        caixaslista.append(caractere)

    for i in range(len(caixaslista) -1, -1, -1):
        if comidos == dias:
            break
        
        if caixaslista[i] == "@":
            comidos += 1
            caixaslista[i] = "."
    caixa = ""
    for caractere in caixaslista:
        caixa += caractere

    print(caixa)
    


        


    