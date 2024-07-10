n=input()
print(n[::-1])
n=input()
if  n[0:len(n)//2]==n[len(n)//2+1:]:
    print("No")
else:
    print("Yes")



