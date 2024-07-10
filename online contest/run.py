# n,m=map(int,input().split())

# if 2*(n+m)>=1000:
#     print("Yes")
# else:
#     print("No")

t=int(input())
sum=0
for i in range(t):
    n,m=map(int,input().split())
    if n>=1000:
        for _ in range(1,m+1):
            print(2*10000*m)
            break;
    else:
        for k in range(m):
            print((1000+n)*m)
            break;


# def can_complete_goal(x, y):
#     perimeter = 2 * (x + y)
#     if perimeter >= 1000:
#         return "YES"
#     else:
#         return "NO"

# Input
# x, y = map(int, input().split())
# print(can_complete_goal(x, y))