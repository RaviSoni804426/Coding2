def search_string_in_array(arr, target):
    for string in arr:
        if target in string:
            return True
    return False

# Example array of strings
arr = ["apple", "banana", "cherry", "date"]
target = "ban"

# Search for the target string in the array
result = search_string_in_array(arr, target)
print(result)  # Output will be True