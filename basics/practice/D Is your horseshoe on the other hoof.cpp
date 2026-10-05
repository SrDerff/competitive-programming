#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int>st;
    for(int i=0;i<4;i++){
        int x;cin>>x;
        st.insert(x);
    }
    cout<<4-st.size();
    return 0;
}