n=int(input())
sum = 0
while n > 9:
        sum += n % 10
        n //= 10
print(sum+n)