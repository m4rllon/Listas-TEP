import math

def distXY():
    p1 = input().split(' ')
    p2 = input().split(' ')
    
    x1, y1 = [float(n) for n in p1]
    x2, y2 = [float(n) for n in p2]
    
    distXY = round(math.sqrt((x2-x1)**2 + (y2-y1)**2), 4)
    print(distXY)
    
distXY()
        
        