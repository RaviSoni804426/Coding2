def store_prime_numbers(n):
    prime_numbers = []
    i = 2
    while len(prime_numbers) < n:
        is_prime = True
        for j in range(2, int(i ** 0.5) + 1):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            prime_numbers.append(i)
        i += 1
    return prime_numbers

# Store the first 10 prime numbers
result = store_prime_numbers(10)
print(result)  # Output will be [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]