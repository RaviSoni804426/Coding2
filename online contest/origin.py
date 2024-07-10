# t=int(input())
# sum=0
# for _ in range(t):
#     n=int(input())
#     for i in range(1,n+1):
#      sum+=i
#     # break;
#     print("%d" % (sum))


def calculate_origin(num):
    while num >= 10:
        num = sum(int(digit) for digit in str(num))
    return num

def sum_of_origin_values(N):
    total_origin = 0
    for i in range(1, N+1):
        total_origin += calculate_origin(i)
    return total_origin

T = int(input())
for _ in range(T):

    N = int(input())
    
    
    print(sum_of_origin_values(N))
