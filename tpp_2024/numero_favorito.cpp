#include <bits/stdc++.h>
using namespace std;
long long lowbit(long long x){
    return x&-x;
}
int main(){
    long long x,y;
    cin>>x>>y;

    long long cpy=x;
    long long moves=0;

    while(cpy<y){
        moves++;
        cpy+=lowbit(cpy);
        if(cpy>=y) break;
    }

    cout<<(cpy==y?moves:-1);
    return 0;
}