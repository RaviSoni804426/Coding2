    # 1st Question
# def is_unique(s):
#     for i in range(len(s)):
#         for j in range(i + 1, len(s)):
#             if s[i] == s[j]:
#                 return False
#     return True
# s=input()
# print(is_unique(s))

    #   2nd Question
# def check_permutation(str1, str2):
#     if len(str1) != len(str2):
#         return False

#     return sorted(str1) == sorted(str2)

# str1 = input()
# str2 = input()
# print(check_permutation(str1, str2))

    #    3rd Question
# def replace_space(s):
#     return s.replace(' ', '%20')
# s=input()
# print(replace_space(s))

    #  4th nahi bana

    #  5th Question
# def is_one_edit_away(str1, str2):
#     if abs(len(str1) - len(str2)) > 1:
#         return False

#     if len(str1) == len(str2):
#         diff_count = 0
#         for i in range(len(str1)):
#             if str1[i] != str2[i]:
#                 if diff_count > 0:
#                     return False
#                 diff_count += 1
#         return diff_count == 1

#     if len(str1) > len(str2):
#         str1, str2 = str2, str1

#     for i in range(len(str1)):
#         if str1[i] != str2[i]:
#             if i < len(str2) - 1 and str1[i] == str2[i+1]:
#                 str2 = str2[:i+1] + str2[i] + str2[i+2:]
#             elif i < len(str2):
#                 str2 = str2[:i] + str2[i+1:]
#             else:
#                 str2 = str2 + str1[i]
#             return is_one_edit_away(str1, str2)

#     return True

   
# str1 = input()
# str2 = input()
# print(is_one_edit_away(str1, str2)) 

#    6th Question
# def compress_string(s):
#     compressed = ""
#     count = 1
#     for i in range(1, len(s)):
#         if s[i] == s[i-1]:
#             count += 1
#         else:
#             compressed += s[i-1] + str(count)
#             count = 1
#     compressed += s[-1] + str(count)

#     if len(compressed) < len(s):
#         return compressed
#     else:
#         return s
# s = input()
# print(compress_string(s))  



