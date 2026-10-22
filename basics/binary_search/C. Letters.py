import sys

def solve():
    ipd=list(map(int,sys.stdin.read().split()))
    n=ipd[0]
    m=ipd[1]
    idx=2
    rooms=[0]*n
    letters=[0]*m
    ans=[]
    for i in range(n):
        rooms[i]=ipd[idx]
        if(i>0):
            rooms[i]+=rooms[i-1]
        idx+=1
    for i in range(m):
        letters[i]=ipd[idx]
        idx+=1

    for i in range(m):
        p1=0
        p2=n
        while(p1<p2):
            mid=(p1+p2)//2
            if(rooms[mid]>=letters[i]):
                p2=mid
            else:
                p1=mid+1
        r=p2
        rm=letters[i]
        if(r>0): rm-=rooms[r-1]
        ans.append(str(r+1)+" "+str(rm))
    

    print('\n'.join(ans))

if(__name__=="__main__"):
    solve()