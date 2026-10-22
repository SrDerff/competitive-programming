import sys

def solve():
    ipd=list(map(int,sys.stdin.read().split()))
    t=ipd[0]
    idx=1
    ans=[]
    for _ in range(t):
        n=ipd[idx]
        k=ipd[idx+1]
        idx+=2
        nums=[0]*k
        for i in range(k):
            nums[i]=ipd[idx]
            idx+=1
        nums.sort()
        tt=0
        tm=0
        for i in range(k):
            if(nums[k-1-i]>tm): 
                tt+=1
            else: break
            tm+=n-nums[k-1-i]
        ans.append(str(tt))
    print('\n'.join(ans))

if(__name__=="__main__"):
    solve()