#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    vector<int>v(2, 0);
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        if(x=='A') v[0]++;
        else if(x=='D') v[1]++;
    }

    if(v[0]!=v[1]){
        cout<<(v[0]>v[1]?"Anton":"Danik");
    }else cout<<"Friendship";

    return 0;
}