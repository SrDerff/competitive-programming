import sys

def solve():
    input_data=sys.stdin.read().split()
    t=int(input_data[0])
    ans=[]
    idx=1
    for _ in range(t):
        n=int(input_data[idx])
        k=int(input_data[idx+1])
        idx+=2
        ans.append(str(k+(k-1)//(n-1)))
    print('\n'.join(ans))

if(__name__=="__main__"):
    solve()