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

        if(n<k):
            ans.append(str(k//n+int(k%n!=0)))
        elif(n%k==0):
            ans.append(str(1))
        else:
            ans.append(str(2))
    print('\n'.join(ans))

if(__name__=="__main__"):
    solve()