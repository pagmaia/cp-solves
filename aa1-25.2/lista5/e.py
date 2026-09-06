import math

def solve():
    numero = int(input())
    somadivisores = 0
    for i in range(1, int(math.sqrt(numero)) + 1):
        if(numero % i == 0):
            if(numero // i == i):
                somadivisores += i

            else:
                somadivisores += i
                somadivisores += numero / i

    somadivisores -= numero
    print(f"{somadivisores:.0f}")

def main():
    testes = int(input())
    for i in range(testes):
        solve()
    
main()