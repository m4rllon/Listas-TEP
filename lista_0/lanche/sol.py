def lanche(item, quant):
    tablePrices = {
        1: 4.0,
        2: 4.5,
        3: 5.0,
        4: 2.0,
        5: 1.5,
    }
    
    full_price = round((tablePrices[item]*quant), 2)
    format_full_price = "{:.2f}".format(full_price)
    
    print(f"Total: R$ {format_full_price}")
    
line = input().split(" ")
item, quant = (int(n) for n in line)

lanche(item, quant)