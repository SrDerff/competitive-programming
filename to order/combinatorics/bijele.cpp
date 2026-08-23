#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=6;
    vector<int>expected={1,1,2,2,2,8};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cout<<expected[i]-x<<" ";
    }
    return 0;
}