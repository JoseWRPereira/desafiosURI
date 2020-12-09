tabela = [['Cachorro Quente',4.0], 
          ['X-salada', 4.5], 
          ['X-Bacon',5.0], 
          ['Torrada simples',2.0], 
          ['Refrigerante',1.5]]

codigo, quantidade = input().split(' ')

codigo = int(codigo)
quantidade = int(quantidade)

print("Total: R$ {:.2f}".format( tabela[codigo-1][1]*quantidade ) )