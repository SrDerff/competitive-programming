#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        ll x;
        cin >> n >> k >> x;

        vector<ll> a(n);
        for (auto &v : a) cin >> v;

        if (k == 0) {
            ll ans = 0, cur = 0;

            for (ll v : a) {
                cur = max(0LL, cur + v - x);
                ans = max(ans, cur);
            }

            cout << ans << '\n';
            continue;
        }

        ll ans = 0;

        if (x > 0) {

            vector<ll> pref(n + 1, 0);
            for (int i = 0; i < n; i++)
                pref[i + 1] = pref[i] + a[i] + x;

            deque<int> dq;

            for (int r = 0; r <= n; r++) {
                while (!dq.empty() && dq.front() < r - k)
                    dq.pop_front();

                if (!dq.empty())
                    ans = max(ans, pref[r] - pref[dq.front()]);

                while (!dq.empty() && pref[dq.back()] >= pref[r])
                    dq.pop_back();

                dq.push_back(r);
            }

            pref.assign(n + 1, 0);
            for (int i = 0; i < n; i++)
                pref[i + 1] = pref[i] + a[i] - x;

            ll mn = (1LL << 62);

            for (int r = 0; r <= n; r++) {
                if (r - k - 1 >= 0)
                    mn = min(mn, pref[r - k - 1]);

                if (mn != (1LL << 62))
                    ans = max(ans, pref[r] - mn + 2LL * k * x);
            }
        }
        else {
            int m = n - k;

            if (m > 0) {
                vector<ll> pref(n + 1, 0);

                for (int i = 0; i < n; i++)
                    pref[i + 1] = pref[i] + a[i] - x;

                deque<int> dq;

                for (int r = 0; r <= n; r++) {
                    while (!dq.empty() && dq.front() < r - m)
                        dq.pop_front();

                    if (!dq.empty())
                        ans = max(ans, pref[r] - pref[dq.front()]);

                    while (!dq.empty() && pref[dq.back()] >= pref[r])
                        dq.pop_back();

                    dq.push_back(r);
                }
            }

            vector<ll> pref(n + 1, 0);

            for (int i = 0; i < n; i++)
                pref[i + 1] = pref[i] + a[i] + x;

            ll mn = (1LL << 62);

            for (int r = 0; r <= n; r++) {
                if (r - m - 1 >= 0)
                    mn = min(mn, pref[r - m - 1]);

                if (mn != (1LL << 62))
                    ans = max(ans,
                              pref[r] - mn + 2LL * x * (k - n));
            }
        }

        cout << ans << '\n';
    }
}
