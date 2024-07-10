import math
t=int(input())
for y in range(t):
 x=map(int,input().split())
if (x % y) == 0 and (x // y) % y == 0:
    return y

x=y+math.gcd(x,y)
print(y)

