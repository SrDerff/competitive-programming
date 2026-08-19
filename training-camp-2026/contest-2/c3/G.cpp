#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, m;
    cin>>n>>m;

    if (m > n) {
        cout << "0 0\n";
        return 0;
    }

    ll base = n / m;
    ll resd = n % m;
    
    ll mink = resd*(base+1)*base/2 + (m-resd)*base*(base -1)/ 2;

    ll gc = n -(m-1);
    ll maxk = gc * (gc - 1) / 2;

    cout << mink << " " << maxk << "\n";
    
    return 0;
}
