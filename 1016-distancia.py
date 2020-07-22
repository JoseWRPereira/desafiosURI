dist=int(input())
velX=60
velY=90

tempo=(dist*60)/abs(velX-velY)

print("{:.0f} minutos".format(tempo))
