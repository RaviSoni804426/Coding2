# def rotate_array(nums, k):
#     n = len(nums)
#     k %= n
#     nums[:] = nums[-k:] + nums[:-k]

# # Example usage
# nums = [1, 2, 3, 4, 5, 6, 7]
# k = 3
# rotate_array(nums, k)
# print(nums)  # Output: [5, 6, 7, 1, 2, 3, 4]



class Solution:
    def rotate(self, nums: list[int], k: int) -> None:
     n = len(nums)
     k %= n
     nums[:] = nums[-k:] + nums[:-k]
# Taking space-separated integers as input and converting them to a list
nums = list(map(int, input().split()))
k = int(input())
rotate_array(nums, k)
print(nums) 
    