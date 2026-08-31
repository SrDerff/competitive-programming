/*
    Problema:

    Encuentra la longitud del substring más largo sin caracteres repetidos.

    abcabcbb
    Respuesta:
    3

    porque:
    abc
    es el substring válido más largo.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int target;
    cin>>target;

    int left=0;

    int sum=0;
    int ans=INT_MAX;

    for(int right=0;right<n;right++){
        sum+=v[right];

        while(sum>=target){
            ans=min(ans, right-left+1);
            sum-=v[left];
            left++;
        }
    }

    cout<<ans;

    return 0;
}
