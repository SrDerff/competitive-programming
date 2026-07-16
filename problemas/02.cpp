/*
2. Eliminar duplicados

Dado un arreglo, elimina los repetidos.

Practica:

sort
unique
erase
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={5,1,2,3,4,5,4,1,2,2,7,9};
    unordered_set<int>unique_v(v.begin(), v.end());
    for(auto x: unique_v){
        cout<<x<<" ";
    }
    cout<<endl;
    //otro metodo (in place)
    //es necesario ordenar el vector primero
    sort(v.begin(), v.end());
    // unique deja a la izquierda todos los repetidos, y a la derecha los que se repiten
    auto it = unique(v.begin(), v.end()); //devuelve un iterador al primer elemento a la derecha repetido
    v.erase(it, v.end()); //borramos a partir del primer repetido hasta el ultimo
    for(auto x: v){
        cout<<x<<" ";
    }

    return 0;
}