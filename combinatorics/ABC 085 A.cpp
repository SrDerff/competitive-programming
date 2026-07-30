#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main(){
    ull N, Y;
    cin>>N>>Y;
    for(int x=0;x<=N;x++){
        for(int y=0;x+y<=N;y++){
            int z=N-x-y;
            if(1e4*x+5e3*y+1e3*z==Y){
                cout<<x<<" "<<y<<" "<<z<<"\n";
                return 0;
            }
        }
    }
    cout<<"-1 -1 -1"<<"\n";
    return 0;
}