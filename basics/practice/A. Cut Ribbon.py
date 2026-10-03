inpt=input()
n,a,b,c=map(int, inpt.split())
abc=sorted([a,b,c])
a=abc[0]
b=abc[1]
c=abc[2]
alim=n//a
blim=n//b

ans=0
for i in range(0, alim+1):
    for j in range(0, blim+1):
        curr=a*i+b*j
        if curr>n: break
        if (n-curr)%c!=0: continue
        k=(n-curr)//c
        ans=max(ans, i+j+k)
print(ans)