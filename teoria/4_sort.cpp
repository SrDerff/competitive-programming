#include <bits/stdc++.h>
using namespace std;

int esMenor(int a, int b){
    return a-b;
}

int main(){

    vector<int>v={3,1,5,4,2};
    sort(v.begin()+2,v.begin()+4, esMenor);

    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    //intercambia cuando el comparador devuelve FALSE
    sort(v.begin(), v.end(), greater<int>());
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}