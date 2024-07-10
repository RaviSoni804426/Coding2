
def nearest_power_of_two(num):
    power = 0
    while (2 ** (power + 1)) <= num:
        power += 1
    return 2 ** power

n=int(input())
result = nearest_power_of_two(n)
print(result)
