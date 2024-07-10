# def count_unique_bowels(s):
#     unique_bowels = set()

#     for char in s:
#         if char.isupper():
#          mirrored_char = char.upper()
#          unique_bowels.add(mirrored_char)

#     return len(unique_bowels)
# s = input("Enter a string: ")
# unique_bowels_count = count_unique_bowels(s)
# print(f"Number of unique BOWELS: {unique_bowels_count}")

# def count_unique_bowels(s):
#     unique_bowels = set()

#     for char in s:
#         if char.isupper():
#             mirrored_char = char.lower() if char in "AEIOU" else char.upper()
#             unique_bowels.add(mirrored_char)

#     return len(unique_bowels)
# s = input("Enter a string: ")

# # Count the number of unique BOWELS
# unique_bowels_count = count_unique_bowels(s)
# print(f"Number of unique BOWELS: {unique_bowels_count}")


# my_string = 'BOWELS'
# user_input = input("Enter a string: ")
# if count_length(user_input)==length(my_string):
#     result=count_len(user_input)
# print(result)


def count_dishes(dishes):
    total_carbs = 0
    count = 0

    for dish in dishes:
        carbs = ord(dish)
        total_carbs += carbs
        count += 1

        if total_carbs >= 270:
            return count

    if total_carbs < 270:
        return -1
n=int(input())
dishes=input().split()
for i in range(n):
 required_dishes = count_dishes(dishes)
print(required_dishes) 