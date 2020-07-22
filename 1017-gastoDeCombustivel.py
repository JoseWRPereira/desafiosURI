tempo_h=int(input())
velMedia_km_h=int(input())
consumo_km_l=12

litros = tempo_h*velMedia_km_h
litros = litros / consumo_km_l

print("{:.3f}".format(litros))
