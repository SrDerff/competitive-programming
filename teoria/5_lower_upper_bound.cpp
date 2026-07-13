#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4,1,3,5,6,2,7,8,-1};
    sort(v.begin(), v.end());
    
    //ultimo elemento menor o igual a n
    auto it = lower_bound(v.begin(), v.end(), 3);
    if(it!=v.end()){
        cout<<"Elemento "<<*it<<" encontrado en la posicion "<<distance(v.begin(), it)<<endl;
    }

    //primer elemento mayor igual a n
    auto it2 = upper_bound(v.begin(), v.end(), 3);
    if(it2!=v.end()){
        cout<<"Elemento "<<*it2<<" encontrado en la posicion "<<distance(v.begin(), it)<<endl;   
    }
    return 0;
}