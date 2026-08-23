#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

ll fact(ll n){
    if(n==1) return 1;
    return n * fact(n-1);
}

int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    unordered_map<char, int>freq;
    long long repFact=1;
    for(auto &x: s){
        freq[x]++;
    }
    for(auto &x: freq){
        if(x.second>1){
            repFact*=fact(x.second);
        }
    }

    int posib=fact(s.size())/repFact;
    cout<<posib<<"\n";
    for(int i=0;i<posib;i++){
        cout<<s<<"\n";
        next_permutation(s.begin(), s.end());
    }

    return 0;
}