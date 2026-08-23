#include <bits/stdc++.h>
using namespace std;

void xprint(vector<int>v){
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){

    int n=5;
    vector<int>v={3,1,4,2,5};

    //tam, inicializador
    vector<int>v2(n, 0);
    xprint(v2);

    cout<<endl;

    //tam
    cout<<v2.size()<<endl;
    
    //valida que el indice este dentro del rango
    cout<<v2.at(3)<<endl;

    //reemplaza el contenido del vector
    v2.assign(n, 3);
    xprint(v2);

    v2.assign(v.begin(), v.begin()+3);
    xprint(v2);

    //front & back
    cout<<v2.front()<<endl;
    cout<<v2.back()<<endl;

    //cuantas posiciones se pueden usar antes de hacer reallocate
    cout<<v2.capacity();

    //elemento maximo y minimo
    cout<<*max_element(v2.begin(), v2.end())<<endl;
    cout<<*min_element(v2.begin(), v2.end());

    return 0;
}