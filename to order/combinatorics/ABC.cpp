#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

int main(){
    map<char, int>letters;
    vector<int>v;
    vector<char>ord;
    int x,y,z;
    char n,m,p;
    cin>>x>>y>>z;
    cin>>n>>m>>p;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    ord.push_back(n);
    ord.push_back(m);
    ord.push_back(p);
    sort(v.begin(), v.end());
    char lt = 'A';
    for(auto &x: v){
        letters[lt++]=x;
    }
    for(auto &x: ord){
        cout<<letters[x]<<" ";
    }
    return 0;
}