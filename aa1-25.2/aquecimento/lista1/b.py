from math import sqrt

def checkprimo(numero):
    if numero <= 1 or numero % 2 == 0:
        return False
    
    for i in range(3, int(sqrt(numero)) + 1, 2):
        if numero % i == 0:
            return False
        
    return True

primo = int(input())
if checkprimo(primo - 2):
    print(2, primo - 2)

else:
    print(-1)


