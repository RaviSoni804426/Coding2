def multiplication_table(n):
    for i in range(1, n+1):
        for j in range(1, n+1):
            print(f"{i} * {j} = {i*j}")
        print()

# Generate a multiplication table up to 5
multiplication_table(5)