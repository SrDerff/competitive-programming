class Solution:
    @staticmethod
    def maxProduct(nums: list[int]) -> int:
        ans=nums[0]

        crr_min=nums[0]
        crr_max=nums[0]

        for i in range(1, len(nums)):
            if(nums[i]<0):
                crr_min,crr_max=crr_max,crr_min

            crr_min=min(nums[i], crr_min*nums[i])
            crr_max=max(nums[i], crr_max*nums[i])

            ans=max(crr_max, ans)

        return ans


nums=[2,3,-2,4]
print(Solution.maxProduct(nums))