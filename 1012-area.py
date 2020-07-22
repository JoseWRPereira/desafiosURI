A,B,C=input().split(" ")
A=float(A)
B=float(B)
C=float(C)
PI=3.14159
triangulo=A*C/2.0
circulo=PI*pow(C,2)
trapezio=((A+B)*C)/2.0
quadrado=pow(B,2)
retangulo=A*B
print("TRIANGULO: {:.3f}".format(triangulo))
print("CIRCULO: {:.3f}".format(circulo))
print("TRAPEZIO: {:.3f}".format(trapezio))
print("QUADRADO: {:.3f}".format(quadrado))
print("RETANGULO: {:.3f}".format(retangulo))
