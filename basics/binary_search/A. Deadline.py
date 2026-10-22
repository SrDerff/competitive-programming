import sys

def solve():
    ipd=list(map(int,sys.stdin.read().split()))
    t=ipd[0]
    idx=1
    ans=[]
    for _ in range(t):
        n=ipd[idx]
        d=ipd[idx+1]
        idx+=2
        p1,p2=0,n-1
        ansd=False
        while(p1<=p2):
            mid=(p1+p2)//2
            res=mid+(d+mid+1-1)//(mid+1)
            if(res<=n):
                ansd=True
                break
            else:
                p2=mid-1
        ans.append("YES" if ansd else "NO")
    print('\n'.join(ans))

if(__name__=="__main__"):
    solve()