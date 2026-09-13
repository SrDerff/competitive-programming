#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i=(a); i<(b); i++)
#define vin vector<int>
#define vll vector<ll>
#define vch vector<char>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<ll,ll>>
#define vbl vector<bool>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define MOD 1e9+7
#define str string

ll cnt=0;
vector<vch> grid(8, vch(8));
vector<vbl> usd(8, vbl(8, false));

bool isValid(ll i, ll j){
    if(grid[i][j]=='*') return false;
    rep(q,0,8){
        if(usd[q][j]) return false;
    }

    // Diagonal superior derecha
    ll r = i - 1;
    ll c = j + 1;

    while (r >= 0 && c < 8) {
        if (usd[r][c])
            return false;

        r--;
        c++;
    }

    // Diagonal superior izquierda
    r = i - 1;
    c = j - 1;

    while (r >= 0 && c >= 0) {
        if (usd[r][c])
            return false;

        r--;
        c--;
    }

    return true;
}

void solve(ll i){
    if(i==8){
        cnt++;
        return;
    }
    rep(j,0,8){
        if(isValid(i,j)){
            usd[i][j]=1;
            solve(i+1);
        }
        usd[i][j]=0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    rep(i,0,8){
        rep(j,0,8){
            cin>>grid[i][j];
        }
    }

    solve(0);

    cout<<cnt;
    
    return 0;
}
