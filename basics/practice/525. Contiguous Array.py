class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        curr=0
        pos={0:0}
        curr=0
        ans=float("-inf")
        for i in range(len(nums)):
            curr-=nums[i]==0
            curr+=nums[i]==1
            if curr in pos:
                ans=max(ans, i-pos[curr])
            else:
                pos[curr]=i
        return ans