# n=input()
# for i in range(0,26):
#     c=ord('a')+i      #ord is the skyll value of a .
#     count=0
#     for j in i:
#         if(ord(j)==c):
#          count+=1
#     print(count)
      #2nd method
# def ccountoccurence(s,c):
#  count=0
# for j in s:
#     if (chr(ord('j'))) == c:
#      count+=1
# return count
# for i in range(0,26):
#  print(ccountoccurence("abbbb", "b"))
   #3rd question
# def natureal_number(l,r):
#       if (l>r):
#        return;
# print(l)
# natural_number(l+1,r);
# return r
   #sum of digit
# def sum_of_digits(number):
#     if number < 10:
#         return number
#     else:
#         return number % 10 + sum_of_digits(number // 10)

# number =int(input())
# sum_of_digits = sum_of_digits(number)
# print(sum_of_digits) 
#  hacker rank
# n=input()
# k=int(input())
# def sod(n):
#   if  n==0: return 0; 
#   elif n<10: return n; 
#   else: return (sod((n//10))%10 + (n % 10))
# def super_digit2(n):
#   if n<10: return n;
#   else: return sod(((super_digit(n // 10))))
# def super_digit(n,k):
#    sum=0;
#    for d in n()





def super_digit(n, k):
    repeated_number = int(str(n) * k)
    
    def calculate_super_digit(num):
        if num < 10:
            return num
        else:
            sum_of_digits = sum(int(digit) for digit in str(num))
            return calculate_super_digit(sum_of_digits)
    
    return calculate_super_digit(repeated_number)

number =input()
repetition =int(input())

result = super_digit(number, repetition)
print(result)  