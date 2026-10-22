import sys

def solve():
    ipd=list(map(int,sys.stdin.read().split()))
    t=ipd[0]
    idx=1
    ans=[]
    for _ in range(t):
        n,k,x=ipd[idx],ipd[idx+1],ipd[idx+2]
        idx+=3
        if(x==1):
            if n%2==0:
                if k<2:
                    ans.append("NO")
                else:
                    ans.append("YES")
                    ans.append(str(n//2))
                    ans.append("2 "*(n//2))
            else:
                if k<3 or n<3:
                    ans.append("NO")
                else:
                    ans.append("YES")
                    ans.append(str((n-3)//2+1))
                    ans.append("2 "*((n-3)//2)+"3 ")
        else:
            ans.append("YES")
            ans.append(str(n))
            ans.append("1 "*n)
    print('\n'.join(ans))

if(__name__=="__main__"):
    solve()