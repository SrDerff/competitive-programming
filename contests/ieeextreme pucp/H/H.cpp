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
    ll n, k;
    cin>>n>>k;
    map<ll, vl> nums;
    rep(i, 0, n) {
        ll x;
        cin>>x;
        nums[x].push_back(i);
    }
    ll total = 0;
    for (auto& i : nums) {
        ll c = k - i.first;
        if (c == i.first) {
            total += sz(i.second)*(sz(i.second)-1)/2;
            i.second = {};
        }
        else {
            total += sz(nums[c])*sz(i.second);
            nums[c] = {};
            i.second = {};
        }
    }
    cout<<total;
    return 0;
}

