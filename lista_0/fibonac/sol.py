def fibbonacci(n):
    if(n == 1 or n == 2): return 1;
    else: return fibbonacci(n-1) + fibbonacci(n-2);

def fatorial(n):
    fatorial = 1;
    while(n >= 1):
        fatorial *= n
        n -= 1
    return fatorial
    
print(f"10! = {fatorial(10)}")

lista = [fibbonacci(x) for x in range(1, 20)]
print(f"Sequência de Fibonacci: {lista}")