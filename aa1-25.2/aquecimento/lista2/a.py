testes = int(input())

def binarysearch(prefixsum, target):
    left = 0
    right = len(prefixsum) - 1
    resposta = 0

    while left <= right:
        mid = left + (right - left) // 2

        if prefixsum[mid] >= target:
            resposta = mid
            right = mid - 1

        else:
            left = mid + 1

    print(resposta + 1)

for i in range(testes):
    ndoces, perguntas = map(int, input().split())
    doces = list(map(int, input().split()))
    doces = sorted(doces, reverse=True)
    prefixsum = []
    count = 0
    for doce in doces:
        count += doce
        prefixsum.append(count)

    for i in range(perguntas):
        target = int(input())
        if target > prefixsum[-1]:
            print(-1)
        else:
            binarysearch(prefixsum, target)



    