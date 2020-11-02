n = int(input())
lst = [100,50,20,10,5,2,1]
qtd = 0
print(n)
for i in lst:
    qtd = n//i
    n -= qtd*i
    print("{} nota(s) de R$ {},00".format(qtd,i))
