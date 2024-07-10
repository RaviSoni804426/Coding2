def print_distinct_elements(arr):
    distinct_elements = set(arr)
    for element in distinct_elements:
        print(element)

# Example array
arr = [1, 2, 2, 3, 3, 4, 5, 5]

# Print distinct elements from the array
print_distinct_elements(arr)