class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        self.frq={}
        self.frq[0]=1
        self.ans=0
        for i in range(len(nums)):
            self.ans+=self.frq.get(nums[i]-k, 0)
            self.frq[nums[i]]=self.frq.get(nums[i], 0)+1
        return self.ans