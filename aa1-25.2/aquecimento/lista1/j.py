ntestes = int(input())
for i in range(ntestes):
    vitoria = False
    gellyhp, flowerhp, kgellyhp, kflowerhp = map(int, input().split())

    if min(gellyhp, kgellyhp) >= min(flowerhp, kflowerhp):
        vitoria = True
        
    if vitoria:
        print("Gellyfish")

    else:
        print("Flower")
