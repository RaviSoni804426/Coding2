t=int(input())
for _ in range(t):
    s=input()
    if s[:]!=s[::-1]:
        print("Yes")
        print(s[ : :-1])
    else:
     print("No")
     


