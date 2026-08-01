#include <bits/stdc++.h>
using namespace std;
int main(){
    bitset<8>bs(15);
    cout<<bs.to_ulong()<<endl;
    cout<<bs<<endl;
    // se recorre de derecha a izquierda
    // desde el bit menos significativo
    cout<<bs[0]; //corresponde al ultimo numero si lo leemos como string (izq->der)
    cout<<endl;
    for(int i=0;i<bs.size();i++){
        cout<<bs[i];
    }
    cout<<endl;

    bs.flip(); //voltea todo
    bs.flip(3); //voltea en pos
    cout<<bs<<endl;

    //booleanos
    cout<<bs.all()<<endl; //devuelve T si todos son 1
    cout<<bs.any()<<endl; //devuelve T si almenos uno es 1
    cout<<bs.none()<<endl; //devuelve T si todos son 0
    
    //cont
    cout<<bs.count()<<endl; //devuelve num de activos (1)
    
    //reset
    bs.reset(3); //apaga el bit en pos
    cout<<bs<<endl;
    bs.reset(); //apaga todo los bits
    cout<<bs<<endl;
    return 0;
}