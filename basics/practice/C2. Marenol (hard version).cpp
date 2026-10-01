#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string a,b; cin>>a>>b;

        set<int>evens_a;
        set<int>evens_b;

        set<int>odds_a;
        set<int>odds_b;

        if(n==3 && a[1]!=b[1]){
            cout<<"-1\n";
            continue;
        }
        if(n<=2){
            if(a!=b){
                cout<<"-1\n";
            }else cout<<"0\n";
            continue;
        }

        for(int i=0;i<n;i++){
            if(a[i]=='0') continue;
            if(i%2==0) evens_a.insert(i);
            else odds_a.insert(i);
        }
        for(int i=0;i<n;i++){
            if(b[i]=='0') continue;
            if(i%2==0){
                if(evens_a.count(i)){
                    evens_a.erase(i);
                }
                else evens_b.insert(i);
            }else{
                if(odds_a.count(i)){
                    odds_a.erase(i);
                }
                else odds_b.insert(i);
            }
        }

        if(evens_a.size()!=evens_b.size() || odds_a.size()!=odds_b.size()){
            cout<<"-1\n";
            continue;
        }

        long long moves=0;
        auto it_b=evens_b.begin();
        for(auto it=evens_a.begin(); it!=evens_a.end(); it++){
            moves+=abs(*it-*it_b++)/2;
        }
        auto it_c=odds_b.begin();
        for(auto it=odds_a.begin(); it!=odds_a.end(); it++){
            moves+=abs(*it-*it_c++)/2;
        }

        cout<<moves<<"\n";
    }

    return 0;
}