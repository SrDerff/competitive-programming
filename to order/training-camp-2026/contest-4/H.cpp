#include <bits/stdc++.h>
using namespace std;

using int64 = long long;
using i128 = __int128_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int64> a(N);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    if (N == 1) {
        cout << "*\n";
        return 0;
    }

    unordered_set<int64> s;
    s.reserve(2 * N);
    s.max_load_factor(0.7);

    for (auto x : a)
        s.insert(x);

    auto solve = [&](int64 X) -> pair<bool, int64> {
        if (X <= 0 || X > (int64)1e18)
            return {false, -1};

        int64 missing = -1;

        for (auto d : a) {
            if (X % d != 0)
                return {false, -1};

            int64 other = X / d;

            if (!s.count(other)) {
                if (missing == -1)
                    missing = other;
                else if (missing != other)
                    return {false, -1};
            }
        }

        if (missing == -1)
            return {false, -1};

        return {true, missing};
    };

    if (!s.count(1)) {
        int64 X = a.back();

        for (auto d : a) {
            if (X % d != 0) {
                cout << "*\n";
                return 0;
            }

            int64 other = X / d;

            if (other != 1 && !s.count(other)) {
                cout << "*\n";
                return 0;
            }
        }

        cout << X << " 1\n";
        return 0;
    }

    {
        int64 X = a.back();

        auto [ok, missing] = solve(X);

        if (ok) {
            cout << X << ' ' << missing << '\n';
            return 0;
        }
    }

    int64 p = -1;

    for (auto x : a) {
        if (x > 1) {
            p = x;
            break;
        }
    }

    if (p == -1) {
        cout << "*\n";
        return 0;
    }

    i128 val = (i128)a.back() * p;

    if (val <= (i128)1e18) {
        int64 X = (int64)val;

        auto [ok, missing] = solve(X);

        if (ok) {
            cout << X << ' ' << missing << '\n';
            return 0;
        }
    }

    cout << "*\n";
    return 0;
}