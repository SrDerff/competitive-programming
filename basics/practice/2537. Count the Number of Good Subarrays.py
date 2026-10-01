class Solution:
    def countGood(self, nums: list[int], k: int) -> int:
        self.suf=[0]*(len(nums)+1)
        frq={}
        for i in range(len(nums), 0, -1):
            self.suf[i]=frq[nums[i-1]]