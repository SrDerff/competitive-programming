class Solution:
    def pivotIndex(self, nums: list[int]) -> int:
        self.pref=[0]*(len(nums)+1)
        for i in range(1, len(self.pref)):
            self.pref[i]=self.pref[i-1]+nums[i-1]
        self.total_sum=self.pref[len(nums)]
        for i in range(1, len(self.pref)):
            mid=nums[i-1]
            left=self.pref[i-1]
            right=self.total_sum-self.pref[i]
            if(left==right): return i-1
        return -1
        