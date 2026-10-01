class NumArray:

    def __init__(self, nums: list[int]):
        self.pref=[0]*(len(nums)+1)
        for i in range(1, len(self.pref)):
            self.pref[i]+=self.pref[i-1]+nums[i-1]

    def sumRange(self, left: int, right: int) -> int:
        return self.pref[right]-self.pref[left-1]


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)