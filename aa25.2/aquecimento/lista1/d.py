ntestes = int(input())
possivel = False
for teste in range(ntestes):
    a, b = map(int, input().split())
    if a > b:
        if (a + b) % 3 == 0 and (a - b) <= b:
            possivel = True

        else:
            possivel = False
    
    else:
        if (a + b) % 3 == 0 and (b - a) <= a:
            possivel = True

        else:
            possivel = False

    if possivel:
        print("YES")

    else:
        print("NO")


