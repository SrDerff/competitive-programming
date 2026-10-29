class Solution:
    def maxWidthRamp(self, nums: list[int]) -> int:
        stack = []
        max_width = 0
        
        for i, num in enumerate(nums):
            if not stack or nums[stack[-1]] > num:
                stack.append(i)
                
        for j in range(len(nums) - 1, -1, -1):
            while stack and nums[stack[-1]] <= nums[j]:
                max_width = max(max_width, j - stack.pop())
                
        return max_width
