/*
1 Agregar documento

2 Imprimir siguiente

3 Ver siguiente documento

4 Mostrar cola

5 Salir
*/

#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int menu(){
    int op;
    cout<<"1. Agregar documento\n";
    cout<<"2. Imprimir siguiente\n";
    cout<<"3. Ver siguiente documento\n";
    cout<<"4. Mostrar cola\n";
    cout<<"5. Salir\n";
    cout<<"\nElegir opcion: \n";
    cin>>op;
    return op;
}

int main(){
    queue<string>impresora;
    int op=-1;
    while(op!=5){
        op=menu();
        switch(op){
            case 1:{
                string doc;
                cin>>doc;
                impresora.push(doc);
                break;
            }
            case 2:{
                string doc = impresora.front();
                cout<<"Imprimiendo: "<<doc<<"...\n";
                impresora.pop();
                break;
            }
            case 3:{
                cout<<impresora.front()<<"\n";
                break;
            }
            case 4:{
                queue<string>imp_copy=impresora;
                while(!imp_copy.empty()){
                    cout<<imp_copy.front()<<"\n";
                    imp_copy.pop();
                }
                break;
            }
            cout<<"Presione una tecla para continuar...\n";
            getch();
            system("cls");
        }
    }
    return 0;
}