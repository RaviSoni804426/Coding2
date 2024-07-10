def are_anagrams(str1, str2):
    sorted_str1 = sorted(str1)
    sorted_str2 = sorted(str2)
    return sorted_str1 == sorted_str2

# Example strings
str1 = "listen"
str2 = "silent"

# Check if the strings are anagrams
result = are_anagrams(str1, str2)
print(result)  # Output will be True
