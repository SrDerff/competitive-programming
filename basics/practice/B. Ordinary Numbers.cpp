#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int nn=stoi(n);

        int prev=(n.size()-1)*9;
        string s(n.size(), '1');
        int ns=stoi(s);
        int i=1;
        while(i*ns<=nn && i<=9){
            prev++;
            i++;
        }
        cout<<prev<<"\n";
    }
    return 0;
}