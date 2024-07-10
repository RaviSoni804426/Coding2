
N = int(input("Enter the number of elements: "))
total_sum = 0

for i in range(N):
    num = int(input("Enter number {}: ".format(i+1)))
    total_sum += num

print("The sum of the numbers is:", total_sum)