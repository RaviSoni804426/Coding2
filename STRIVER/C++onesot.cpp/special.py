def is_special_array(nums):

    n = len(nums)
    
    for i in range(n - 1):
        if (nums[i] % 2 == nums[i+1] % 2):
            return False
    
    return True


nums = list(map(int,input().split()))
print(is_special_array(nums))