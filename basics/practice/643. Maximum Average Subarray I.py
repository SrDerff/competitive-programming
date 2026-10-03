class Solution:
    def findMaxAverage(self, nums: list[int], k: int) -> float:
        ans=float("-inf")
        lft=0
        curr=0
        for i in range(len(nums)):
            if (i-lft+1)<=k:
                curr+=nums[i]
                if(i-lft+1)==k:
                    ans=max(ans, curr)
                continue
            curr-=nums[lft]
            curr+=nums[i]
            ans=max(ans, curr)
            lft+=1
        return ans/k