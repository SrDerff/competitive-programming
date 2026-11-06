#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int pref=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        pref+=x;
        cout<<pref<<" ";
    }
    return 0;
}