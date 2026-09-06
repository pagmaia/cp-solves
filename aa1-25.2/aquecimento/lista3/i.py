def check_pos_segura(tabuleiro, posx, posy):
        
    for j in range(posy, -1, -1):
        if tabuleiro[posx][j]:
            return False
        
    




        







tabuleiro = []
for i in range(8):
    posicoes = input()
    linha = []
    for pos in posicoes:
        linha.append((pos, 0))

    tabuleiro.append(linha)


