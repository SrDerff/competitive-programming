import sys

def solve():
    ipd=sys.stdin.read().split()
    n=int(ipd[0])
    nums=[0]*n

    for i in range(n):
        nums[i]=int(ipd[i+1])

    crr1=0
    crr2=0
    left=0

    ans=0
    for i in range(n):
        if(i==0):
            if(nums[i]==1):
                left=1
                crr1+=1
            else:
                left=2
                crr2+=1
        else:
            if(left==1):
                if(nums[i]==1):
                    crr1+=1
                else:
                    crr2+=1
                    ans=max(ans, min(crr1,crr2))
                    if(i+1<n and nums[i+1]!=nums[i]):
                        crr1=0
                        left=2
            else:
                if(nums[i]==2):
                    crr2+=1
                else:
                    crr1+=1
                    ans=max(ans, min(crr1,crr2))
                    if(i+1<n and nums[i+1]!=nums[i]):
                        crr2=0
                        left=1
    print(ans*2)

if(__name__=="__main__"):
    solve()