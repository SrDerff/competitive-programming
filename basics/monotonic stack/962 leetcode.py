#no monotonic stack

class Solution:
    def maxWidthRamp(self, nums: list[int]) -> int:
        indexs=sorted(range(len(nums)), key=lambda x:nums[x])
        maxw=0
        minidx=len(nums)
        for id in indexs:
            maxw=max(maxw,id-minidx)
            minidx=min(minidx,id)
        return maxw
