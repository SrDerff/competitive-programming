#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    vector<pair<int,int>>v1(n);
    vector<pair<int,int>>v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i].first;
        cin>>v1[i].second;

        v2[i].first=v1[i].first;
        v2[i].second=v1[i].second;
    }

    sort(v1.begin(), v1.end(), [](auto a, auto b){
        return a.first>b.first;
    });
    sort(v2.begin(), v2.end(), [](auto a, auto b){
        return a.second<b.second;
    });

    if(v1[1].first>v2[1].second || v2[1].second<v1[1].first){
        cout<<0<<"\n";
        return 0;
    }

    int idx1=0;
    if(v1[0].first==v2[0].first && v1[0].second==v2[0].second){
        idx1=1;
    }
    cout<<max({v2[idx1].second-v1[1].first, v2[1].second-v1[idx1].first, 0});

    return 0;
}