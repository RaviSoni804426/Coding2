def maximum_money_accumulated(x, y):
    for i in range(1,y+1):
    
     while y > 0:
        if x >= 1000:
        
            x *= 2
        else:
            x += 1000
        y -= 1
    return x
t = int(input())

for _ in range(t):
    x, y = map(int, input().split())
    print(maximum_money_accumulated(x, y))