 /*
 Unión de conjuntos (set)
Objetivo

Practicar cómo un set elimina duplicados automáticamente.

Entrada
A

1 2 3 4

B

3 4 5 6
Salida
1 2 3 4 5 6
Lo interesante

No tienes que eliminar repetidos.

El set lo hace solo.
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    set<int>a;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    for(auto x: a){
        cout<<x<<"\n";
    }
    return 0;
}