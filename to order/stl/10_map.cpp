#include <bits/stdc++.h>
using namespace std;
int main(){
    //guarda clave, valor en pairs
    //ordenado automaticamente bajo un arbol 
    map<int, string>m;
    m.insert({1, "XD"});
    m.insert(make_pair(3, "xd"));
    m[2]="XD";

    for(auto x: m){
        cout<<x.first<<": "<<x.second<<endl;
    }
    cout<<endl;

    //no se ordena, se almacena en hashtables
    unordered_map<int, string>m2;
    m2.insert({1, "XD"});
    m2.insert(make_pair(3, "xd"));
    m2[2]="XD";

    for(auto x: m2){
        cout<<x.first<<": "<<x.second<<endl;
    }
    cout<<endl;

    //si el valor no existe en esa clave, se inicaliza por defecto
    // int: 0
    // float: 0.0
    // str: ""
    cout<<4<<": "<<m[4];
    return 0;
}