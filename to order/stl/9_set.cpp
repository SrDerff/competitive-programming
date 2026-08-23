#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //guarda elementos sin repetir, en orden
    //se ordena con trees
    //no se puede editar los valores
    //si se quiere modificar algo: erase + insert
    set<int>my_set;
    my_set.insert(3);
    my_set.insert(3);
    my_set.insert(4);
    for(auto x: my_set){
        cout<<x<<" ";
    }
    
    //lo mismo pero no se ordenan
    //se usa hash tables
    unordered_set<int>my_uo_set;
    my_uo_set.insert(3);
    my_uo_set.insert(4);
    for(auto x: my_uo_set){
        cout<<x<<" ";
    }

    //set con repetidos
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    for(auto x: ms){
        cout<<x<<" ";
    }

    auto it=ms.find(3);
    if(it!=ms.end()){
        cout<<"Valor: "<<*it<<" en la posicion: "<<distance(ms.begin(), it);
    }else{
        cout<<"No encontrado.";
    }
    return 0;

    unordered_multiset<int>uo_ms;
    uo_ms.insert(1);
    uo_ms.insert(2);
    uo_ms.insert(3);
}