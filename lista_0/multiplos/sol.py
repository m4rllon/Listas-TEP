def multiplo(a, b):
    maior = a if (a > b) else b 
    menor = a if (a < b) else b 
    print(type(maior/menor), "----", type(maior))
    if(type(maior/menor) == type(maior)): return "Sao multiplos"
    else: return "Nao sao multiplos"
    
# print(multiplo(10,10))

print(10/2)