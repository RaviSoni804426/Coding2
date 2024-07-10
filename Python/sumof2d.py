def calculate_row_sums(arr):
    row_sums = []
    for i in range(len(arr)):
        row_sum = 0
        for j in range(len(arr[i])):
            row_sum += arr[i][j]
        row_sums.append(row_sum)
    return row_sums

# Example 2D array
arr = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

# Calculate the sum of each row
row_sums = calculate_row_sums(arr)
print(row_sums)  # Output will be [6, 15, 24]




def calculate_col_sums(arr):
    transposed_arr = list(zip(*arr))
    row_sums = calculate_row_sums(transposed_arr)
    return row_sums

# Example 2D array
arr = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

# Calculate the sum of each column
col_sums = calculate_col_sums(arr)
print(col_sums)  # Output will be [12, 15, 18]