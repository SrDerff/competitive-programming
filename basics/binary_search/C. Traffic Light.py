import sys

def solve():
    ipd=sys.stdin.read().split()
    t=int(ipd[0])
    idx=1
    ans=[]
    for _ in range(t):
        n=int(ipd[idx])
        c=ipd[idx+1]
        tf=ipd[idx+2]
        idx+=3

        state=0
        left=-1
        ansd=-1
        fg=n
        if(c=='g'):
            ans.append('0')
            continue
        for i in range(n):
            if tf[i]=='g': fg=min(fg, i)
            if(state==1 and tf[i]=='g'):
                ansd=max(ansd, i-left)
                state=0
            elif tf[i]==c and state==0:
                left=i
                state=1
        if state==1:
            ans.append(str(max(ansd, n-left+fg)))
        else:
            ans.append(str(ansd))
    print('\n'.join(ans))

if(__name__=="__main__"):
    solve()