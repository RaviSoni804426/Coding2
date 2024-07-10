n=int(input())
sum=0
for i in range(n):
 s=input().split()
for j in range(1,26):
 if sum('ord'(s[j]))>270: 
    break
 print(count('ord'(s[i])))