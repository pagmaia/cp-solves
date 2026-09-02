from math import lcm

maximo, a , b = map(int, input().split())
mmc = lcm(a, b)
resultadofinal = maximo * (maximo + 1) // 2
resultadofinal -= a * (maximo // a) * ((maximo // a) + 1) // 2
resultadofinal -= b * (maximo // b) * ((maximo // b) + 1) // 2
resultadofinal += mmc * (maximo // mmc) * ((maximo // mmc) + 1) // 2

print(resultadofinal)

