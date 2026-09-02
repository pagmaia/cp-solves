testes = int(input())

for i in range(testes):
    vida, pontofinal = map(int, input().split())
    resposta = 0
    ini = 0
    fim = pontofinal

    while ini <= fim:
        mid = ini + (fim - ini) // 2
        vidarecuperada = mid
        tamanho = pontofinal // (mid + 1)
        resto = pontofinal % (mid + 1)
        vidagasta = (resto * (tamanho + 1) * (tamanho + 2) / 2) + ((mid + 1 - resto) * tamanho * (tamanho + 1) / 2)
    
        if vidagasta <= vida + vidarecuperada - 1:
            resposta = mid
            fim = mid - 1

        else:
            ini = mid + 1
            
    print(resposta + pontofinal)
        
        
    




    
    



    


