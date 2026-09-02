testes = int(input())

for teste in range(testes):
    beatmap = []
    resposta = ""
    nlinhas = int(input())

    for i in range(nlinhas):
        beatmap.append(input())

    for i in range(len(beatmap) -1, -1, -1):
        
        for j in range(len(beatmap[i])):
            if beatmap[i][j] == "#":
                resposta += str(j + 1)
                resposta += " "

    print(resposta)




