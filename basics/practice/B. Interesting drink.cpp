#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    vector<int>shops(n);
    for(int i=0;i<n;i++) cin>>shops[i];
    sort(shops.begin(), shops.end());

    int q;
    cin>>q;

    while(q--){
        int x;
        cin>>x;
        cout<<distance(shops.begin(), upper_bound(shops.begin(), shops.end(), x))<<"\n";
    }
    return 0;
}