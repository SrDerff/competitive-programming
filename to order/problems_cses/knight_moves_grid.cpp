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
#define all(x) (x).begin(), (x).end()
#define MOD 1e9+7
#define str string

void bfs(vector<vll>&grid, ll _i, ll _j, ll limit){
    queue<pll>pos;
    pos.push({_i,_j});

    ll xx=0;

    while(!pos.empty()){
        //top-left side
        pll curr=pos.front();
        ll i=curr.first, j=curr.second;

        ll x=-1, y=-2;
        ll new_idx=i+x, new_idy=j+y;
        if(new_idx>=0 && new_idy>=0){
            if(grid[new_idx][new_idy]==-1){
                grid[new_idx][new_idy]=grid[i][j]+1;
                pos.push({new_idx, new_idy});
            }
        }
        swap(x,y);
        new_idx=i+x, new_idy=j+y;
        if(new_idx>=0 && new_idy>=0){
            if(grid[new_idx][new_idy]==-1){
                grid[new_idx][new_idy]=grid[i][j]+1;
                pos.push({new_idx, new_idy});
            }
        }

        //top-right side
        x=-2, y=1;
        new_idx=i+x, new_idy=j+y;
        if(new_idx>=0 && new_idy<limit){
            if(grid[new_idx][new_idy]==-1){
                grid[new_idx][new_idy]=grid[i][j]+1;
                pos.push({new_idx, new_idy});
            }
        }
        x=-1, y=2;
        new_idx=i+x, new_idy=j+y;
        if(new_idx>=0 && new_idy<limit){
            if(grid[new_idx][new_idy]==-1){
                grid[new_idx][new_idy]=grid[i][j]+1;
                pos.push({new_idx, new_idy});
            }
        }

        //bottom-left side
        x=+1, y=-2;
        new_idx=i+x, new_idy=j+y;
        if(new_idx<limit && new_idy>=0){
            if(grid[new_idx][new_idy]==-1){
                grid[new_idx][new_idy]=grid[i][j]+1;
                pos.push({new_idx, new_idy});
            }
        }
        x=+2, y=-1;
        new_idx=i+x, new_idy=j+y;
        if(new_idx<limit && new_idy>=0){
            if(grid[new_idx][new_idy]==-1){
                grid[new_idx][new_idy]=grid[i][j]+1;
                pos.push({new_idx, new_idy});
            }
        }

        //bottom-right side
        x=+1, y=+2;
        new_idx=i+x, new_idy=j+y;
        if(new_idx<limit && new_idy<limit){
            if(grid[new_idx][new_idy]==-1){
                grid[new_idx][new_idy]=grid[i][j]+1;
                pos.push({new_idx, new_idy});
            }
        }
        x=+2, y=+1;
        new_idx=i+x, new_idy=j+y;
        if(new_idx<limit && new_idy<limit){
            if(grid[new_idx][new_idy]==-1){
                grid[new_idx][new_idy]=grid[i][j]+1;
                pos.push({new_idx, new_idy});
            }
        }

        pos.pop();
    }
}

void solve(){
    ll n; cin>>n;

    vector<vll>grid(n, vll(n, -1));

    grid[0][0]=0;

    bfs(grid,0,0,n);

    rep(i,0,n){
        rep(j,0,n){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
