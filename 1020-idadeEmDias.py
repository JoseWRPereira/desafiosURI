idade = int(input())

anos = idade//365
idade -= anos*365
meses = (idade % 365)//30
idade -= meses*30
dias = idade % 30

print("{} ano(s)".format(anos))
print("{} mes(es)".format(meses))
print("{} dia(s)".format(dias))

