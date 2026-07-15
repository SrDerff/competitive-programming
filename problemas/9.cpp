/*
Se te dan dos conjuntos de números.

Debes imprimir los números que aparecen en ambos.

Entrada
Conjunto A
5
1 2 3 4 5

Conjunto B
6
2 4 6 8 10 1


Salida
1
2
4
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>ans;
    set<int>s1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s1.insert(x);
    }
    int n2;
    cin>>n2;
    set<int>s2;
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        s2.insert(x);
        if(s1.find(x)!=end(s1)) ans.insert(x); 
    }

    for(auto x: ans){
        cout<<x<<"\n";
    }
    return 0;
}