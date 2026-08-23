/*
 ⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀  ⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ 
⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀  ⢀⢴⣶⣆ 
⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿ 
⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀ 
⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ 
⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⠀⠀⠀ ⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⠀⠀⠀⠀⠀ ⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀ 
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⠿⠿⠿⠿⠛⠉ 

        Vuelve valeria
*/

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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define MOD 1e9+7
#define str string

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;

    if(a+b > n){
        cout<<"NO\n";
        return;
    }

    if(a==0 && b==0){
        cout<<"YES\n";
        rep(i,0,n){
            cout<<i+1<<" ";
        }
        cout<<"\n";
        rep(i,0,n){
            cout<<i+1<<" ";
        }
        cout<<"\n";
        return;
    }

    if((a+b)==a || (a+b)==b){
        cout<<"NO\n";
        return;
    }

    ll min_a=min(a,b);
    ll max_a=max(a,b);


    vll ans_less;
    vll ans_max;

    if(a+b==n){
        cout<<"YES\n";
        rep(i,0,min_a){
            ans_less.push_back(n-min_a+1+i);
            ans_max.push_back(i+1);
        }

        rep(i,0,max_a){
            ans_less.push_back(i+1);
            ans_max.push_back(n-max_a+1+i);
        }

        if(min_a==a){
            rep(i,0,n){
                cout<<ans_less[i]<<" ";
            }
            cout<<"\n";
            rep(i,0,n){
                cout<<ans_max[i]<<" ";
            }
            cout<<"\n";
        }else{
            rep(i,0,n){
                cout<<ans_max[i]<<" ";
            }
            cout<<"\n";
            rep(i,0,n){
                cout<<ans_less[i]<<" ";
            }
            cout<<"\n";
        }
        return;
    }

    if(a+b<n){
        ll diff=n-(max_a+min_a);

        rep(i,0,min_a){
            ans_less.push_back(n-min_a+1+i);
            ans_max.push_back(i+1);
        }

        ll index_less=1;
        ll index_max=min_a+diff+1;

        rep(i,0,max_a){
            while(index_max>=min_a+1 && index_max<=min_a+diff){
                index_max++;
            }
            while(index_less>=min_a+1 && index_less<=min_a+diff){
                index_less++;
            }

            ans_less.push_back(index_less);
            ans_max.push_back(index_max);

            index_less++;
            index_max++;
        }

        rep(i,0,diff){
            ans_less.push_back(min_a+i+1);
            ans_max.push_back(min_a+i+1);
        }
    }
    cout<<"YES\n";

    if(min_a==a){
        rep(i,0,n){
            cout<<ans_less[i]<<" ";
        }
        cout<<"\n";
        rep(i,0,n){
            cout<<ans_max[i]<<" ";
        }
        cout<<"\n";
    }else{
        rep(i,0,n){
            cout<<ans_max[i]<<" ";
        }
        cout<<"\n";
        rep(i,0,n){
            cout<<ans_less[i]<<" ";
        }
        cout<<"\n";
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
