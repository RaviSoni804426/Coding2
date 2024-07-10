def is_fibonacci(arr):
    if len(arr) < 3:
        return False
    
    for i in range(2, len(arr)):
        if arr[i] != arr[i-1] + arr[i-2]:
            return False
        
    return True

fibonacci_arr = list(input().split())

result = is_fibonacci(fibonacci_arr)
print(result)

