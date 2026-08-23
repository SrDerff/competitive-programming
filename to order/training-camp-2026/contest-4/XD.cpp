#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
using u128 = __uint128_t;

ull mulMod(ull a, ull b, ull mod) {
    return (u128)a * b % mod;
}

ull powMod(ull a, ull e, ull mod) {
    ull res = 1;

    while (e) {
        if (e & 1)
            res = mulMod(res, a, mod);

        a = mulMod(a, a, mod);
        e >>= 1;
    }

    return res;
}

bool esPrimo(ull n) {
    if (n < 2)
        return false;

    for (ull p : {2ULL, 3ULL, 5ULL, 7ULL, 11ULL, 13ULL, 17ULL,
                  19ULL, 23ULL, 29ULL, 31ULL, 37ULL}) {
        if (n % p == 0)
            return n == p;
    }

    ull d = n - 1;
    int s = 0;

    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for (ull a : {2ULL, 325ULL, 9375ULL, 28178ULL,
                  450775ULL, 9780504ULL, 1795265022ULL}) {

        if (a % n == 0)
            continue;

        ull x = powMod(a % n, d, n);

        if (x == 1 || x == n - 1)
            continue;

        bool compuesto = true;

        for (int r = 1; r < s; r++) {
            x = mulMod(x, x, n);

            if (x == n - 1) {
                compuesto = false;
                break;
            }
        }

        if (compuesto)
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<ull> A(N);

    for (ull& x : A)
        cin >> x;

    sort(A.begin(), A.end());

    if (N == 1) {
        if (A[0] == 1) {
            cout << "*\n";
        }
        else {
            cout << A[0] << " " << 1 << '\n';
        }

        return 0;
    }

    ull M = A.back();

    bool faltaX = false;
    ull posibleX = 0;

    if (A[0] == 1) {
        ull p = A[1];

        if (esPrimo(p) && M <= 1000000000000000000ULL / p) {
            posibleX = M * p;

            bool todosDividen = true;

            for (ull d : A) {
                if (posibleX % d != 0) {
                    todosDividen = false;
                    break;
                }
            }

            if (todosDividen) {

                ull cantM = 0;

                for (ull d : A) {
                    if (M % d == 0)
                        cantM++;
                }

                ull aux = M;
                ull k = 0;

                while (aux % p == 0) {
                    aux /= p;
                    k++;
                }

                u128 numerador = (u128)cantM * (k + 2);

                if (numerador % (k + 1) == 0) {
                    ull cantX = numerador / (k + 1);

                    if (cantX == (ull)N + 1)
                        faltaX = true;
                }
            }
        }
    }

    if (faltaX) {
        cout << posibleX << " " << posibleX << '\n';
        return 0;
    }

    ull X = M;

    unordered_set<ull> existe;
    existe.reserve(N * 2);

    for (ull d : A)
        existe.insert(d);

    ull faltante = 0;

    for (ull d : A) {
        ull pareja = X / d;

        if (!existe.count(pareja)) {
            faltante = pareja;
            break;
        }
    }

    if (faltante == 0) {
        ull raiz = sqrtl((long double)X);

        while ((u128)(raiz + 1) * (raiz + 1) <= X)
            raiz++;

        while ((u128)raiz * raiz > X)
            raiz--;

        faltante = raiz;
    }

    cout << X << " " << faltante << '\n';

    return 0;
}