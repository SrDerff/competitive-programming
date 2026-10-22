import sys

def solve():
    ipd=list(map(int,sys.stdin.read().split()))
    n=ipd[0]
    m=ipd[1]
    frq={}
    idx=2
    for i in range(m):
        frq[ipd[idx]]=frq.get(ipd[idx], 0)+1
        idx+=1
    p1,p2=1,m//n
    ans=0
    while(p1<=p2):
        mid=(p1+p2)//2
        ppl=0
        for val in frq.values():
            ppl+=val//mid
        if(ppl>=n):
            ans=mid
            p1=mid+1
        elif (ppl<n):
            p2=mid-1
    print(ans)

if(__name__=="__main__"):
    solve()