/*
    PROBLEM:
    Supongamos:

    Dado un arreglo de números positivos, encuentra la longitud del subarray más corto 
    cuya suma sea >= target.

    Ejemplo:
    target = 7
    [2, 3, 1, 2, 4, 3]

    La respuesta es:
    [4, 3]

    longitud 2.
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
