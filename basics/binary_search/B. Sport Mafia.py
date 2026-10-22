import sys

def solve():
    n,k=map(int,sys.stdin.read().split())
    p1,p2=1,n
    while(p1<=p2):
        mid=(p1+p2)//2
        if((mid*(mid+1)//2)+mid<(k+n)):
            p1=mid+1
        elif((mid*(mid+1)//2)+mid>(k+n)):
            p2=mid-1
        else:
            print(n-mid)
            break

if(__name__=="__main__"):
    solve()