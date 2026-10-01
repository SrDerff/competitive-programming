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

        if(n<=2){
            string s1,s2; cin>>s1>>s2;
            cout<<(s1==s2?"YES":"NO")<<"\n";
            continue;
        }

        int even_1=0;
        int odd_1=0;

        int even_1b=0;
        int odd_1b=0;

        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            if(x=='0') continue;
            if(i%2==0) even_1++;
            else if(i%2!=0) odd_1++;
        }
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            if(x=='0') continue;
            if(i%2==0) even_1b++;
            else if(i%2!=0) odd_1b++;
        }

        if(even_1==even_1b && odd_1==odd_1b && n>2){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
    return 0;
}