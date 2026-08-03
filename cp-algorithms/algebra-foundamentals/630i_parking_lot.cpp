#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll power(ll a, ll b){
    ll res = 1;
    while(b > 0){
        res *= a;
        b--;
    }
    return res;
}

ll ways(ll x){
    if(x == 0)
        return 1;
    return 3 * power(4, x - 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll ans = 0;

    for(ll left = 0; left <= n - 2; left++){
        ll right = n - 2 - left;
        ans += ways(left) * ways(right);
    }
    
    cout << ans * 4;
    return 0;
}