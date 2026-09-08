#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define vii vector<pair<int, int>>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define ll long long

#define f first
#define s second
#define pb push_back

#define all(x) begin(x), end(x)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define per(i, a, b) for(int i = a - 1; i >= b; i--)
#define sz(x) (int)x.size()

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vl nums(n);
    rep(i, 0, n) cin>>nums[i];
    ll x = nums[0];
    rep(i, 1, n) x = gcd(x, nums[i]);
    cout<<x;
    return 0;
}

