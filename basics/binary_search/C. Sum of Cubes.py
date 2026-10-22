import sys

def solve():
    ipd=list(map(int,sys.stdin.read().split()))
    t=ipd[0]
    idx=1
    ans=[]
    for _ in range(t):
        n=ipd[idx]
        idx+=1
        crr=1
        fnd=False
        while(crr*crr*crr<=n):
            rem=n-(crr*crr*crr)
            p1,p2=1,rem
            ansd=-1
            while(p1<=p2):
                mid=(p1+p2)//2
                pot=mid*mid*mid
                if(pot<rem):
                    p1=mid+1
                elif(pot>rem):
                    p2=mid-1
                else:
                    ansd=mid
                    break
            if(ansd!=-1):
                ans.append("YES")
                fnd=True
                break
            crr+=1
        if not fnd: ans.append("NO")
    print('\n'.join(ans))

if(__name__=="__main__"):
    solve()