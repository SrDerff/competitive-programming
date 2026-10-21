t=int(input())
ans=[]
while(t-1>=0):
    tc=input()
    a,b,c=map(int, tc.split())

    tt=a+b+c
    k=tt//9

    ans.append("YES" if tt%9==0 and min(a,b,c)>=k else "NO")
    t-=1
print('\n'.join(ans))