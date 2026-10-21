#include <bits/stdc++.h>
using namespace std;

vector<char>ltts={'A','B','C','D'};

char findd(char crr, char a, char b, char c, char d){
    for(auto x: ltts){
        if(x!=crr && x!=a && x!=b && x!=c && x!=d){
            return x;
        }
    }
    return ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;

    vector<vector<char>>v(n+2, vector<char>(m+2, '-'));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>v[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            v[i][j]=findd(v[i][j], v[i-1][j], v[i+1][j], v[i][j-1], v[i][j+1]);
            cout<<v[i][j];
        }
        cout<<"\n";
    }
    

    return 0;
}