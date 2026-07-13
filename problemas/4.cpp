/*
4. Contar frecuencias

El clásico.

Entrada

1 2 2 5 3 2 1

Salida

1 -> 2
2 -> 3
3 -> 1
5 -> 1
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int, int>freq;
    for(auto &x: v){
        cin>>x;
        freq[x]++;
    }
    for(auto x: freq){
        cout<<x.first<<" - "<<x.second<<"\n";
    }
    return 0;
}