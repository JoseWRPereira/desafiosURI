n = float(input())

notas=[100, 50, 20, 10, 5, 2]
moedas=[1.00, 0.50, 0.25, 0.10, 0.05, 0.01 ]

print("NOTAS:")

for i in notas:
    num = n//i
    n -= num*i
    print("{:.0f} nota(s) de R$ {:.2f}".format(num,i))

print("MOEDAS:")

for i in moedas:
    num = n//i
    n -= num*i
    print("{:.0f} moeda(s) de R$ {:.2f}".format(num,i))

print("\n")