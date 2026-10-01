class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        self.frq={}
        self.ans=0
        for i in range(len(nums)):
            self.ans+=self.frq[k-nums[i]]
            self.frq[nums[i]]+=1
        return self.ans