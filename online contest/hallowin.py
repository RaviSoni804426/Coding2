# t = int(input())

# for _ in range(t):
#     n, k = map(int, input().split())
#     a = list(map(int, input().split()))
#     if k >= n-1:
#         print("YES")
#     else:
#         for i in range(n - 1):
#             if a[i] > a[i + 1] and a[i] <= a[i + 1] + k:
#                 print("NO")
#                 break
#         else:
#             print("YES")

def is_sorted(arr):
    return all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1))

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    if is_sorted(arr) or k > 1:
        print("YES")
    else:
        print("NO")