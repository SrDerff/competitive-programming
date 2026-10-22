import sys

def solve():
    ipd=list(map(int,sys.stdin.read().split()))
    n=ipd[0]
    m=ipd[1]
    arr=[0]*n
    idx=2
    ans=[]
    for i in range(n):
        arr[i]=ipd[idx]
        idx+=1
    arr.sort()
    cnt=0
    for i in range(n):
        if(cnt>=m): break
        cnt+=arr[n-1]-arr[i]
    if(cnt>=m):
        print(str(arr[n-1])+" "+str(arr[n-1]+m))
    else:
        ans1=arr[n-1]+((m-cnt)//n)+int((m-cnt)%n!=0)
        print(str(ans1)+" "+str(arr[n-1]+m))

if(__name__=="__main__"):
    solve()