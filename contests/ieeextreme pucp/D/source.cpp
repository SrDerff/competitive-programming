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
    int n;
    cin>>n;
    map<int, int> frec;
    rep(i, 0, n) {
        int x;
        cin>>x;
        frec[x]++;
    }
    vii reps;
    for (auto i : frec) reps.push_back({i.first, i.second});
    sort(all(reps), [](auto p1, auto p2) {
        if (p1.second == p2.second) p1.first < p2.first;
        return p1.second > p2.second;
    });
    cout<<reps[0].first;
    return 0;
}

