class Solution:
    def minOperations(self, nums: list[int], x: int) -> int:
        j=len(nums)-1
        i=0
        frq={}
        curr_sm=0
        fnd=False
        ans=float('inf')

        for i in range(len(nums)):
            curr_sm+=nums[i]
            if curr_sm>x: break
            if curr_sm not in frq:
                frq[curr_sm]=i
            if curr_sm == x:
                ans = min(ans,i+1)
                fnd = True

        curr_sm=0
        for i in range(len(nums)-1, -1, -1):
            curr_sm+=nums[i]
            compl=x-curr_sm
            if compl == 0:
                ans = min(ans, len(nums)-i)
                fnd=True
            elif compl in frq:
                lft=frq[compl]
                if lft<i:
                    ans=min(ans, frq[compl]+1+len(nums)-i)
                    fnd=True

        if fnd: return ans
        else: return -1
