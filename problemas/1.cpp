/*
1. El k-ésimo mayor

Dado un arreglo, imprime el k-ésimo elemento más grande.

Practica:

vector
sort
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout<<v[k];
    return 0;
}