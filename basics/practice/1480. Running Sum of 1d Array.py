class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        self.ans=[0]*len(nums)
        self.ans[0]=nums[0]
        for i in range(1, len(self.ans)):
            self.ans[i]+=self.ans[i-1]+nums[i]
        return self.ans