tamanho = int(input())

takahashi = input()
aoki = input()
find = False

if len(takahashi) == tamanho and len(aoki) == tamanho:
    for i in range(tamanho):
        if aoki[i] == "o" and takahashi[i] == "o":
            print("Yes")
            find = True
            break

if not find:
    print("No")