def matrix():
    def take_matrix_input(rows, cols):
     matrix = []
    for _ in range(rows):
        row = []
        for _ in range(cols):
            element = int(input("Enter element: "))
            row.append(element)
        matrix.append(row)
    return matrix

def matrix_multiplication(matrix1, matrix2):
    rows1, cols1 = len(matrix1), len(matrix1[0])
    rows2, cols2 = len(matrix2), len(matrix2[0])
    
    if cols1 != rows2:
        raise ValueError("Matrices are not compatible for multiplication.")
    
    result = [[0 for _ in range(cols2)] for _ in range(rows1)]
    
    for i in range(rows1):
        for j in range(cols2):
            for k in range(cols1):
                result[i][j] += matrix1[i][k] * matrix2[k][j]
    
    return result

# Example usage
num_rows1 = int(input("Enter number of rows for first matrix: "))
num_cols1 = int(input("Enter number of columns for first matrix: "))

matrix1 = take_matrix_input(num_rows1, num_cols1)
print("First Matrix:")
for row in matrix1:
    print(row)

num_rows2 = int(input("Enter number of rows for second matrix: "))
num_cols2 = int(input("Enter number of columns for second matrix: "))

matrix2 = take_matrix_input(num_rows2, num_cols2)
print("Second Matrix:")
for row in matrix2:
    print(row)

# Perform matrix multiplication
result = matrix_multiplication(matrix1, matrix2)
print("Result:")
for row in result:
    print(row)  ``