#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int menu(){
    int op;
    cout<<"1. Agregar numero\n";
    cout<<"2. Sacar mayor\n";
    cout<<"3. Mostrar mayor\n";
    cout<<"4. Mostrar cola\n";
    cout<<"5. Salir\n";
    cout<<"\nEscoger opcion: \n";
    cin>>op;
    return op;
}

int main(){
    int op=-1;
    priority_queue<int>prio;
    while(op!=5){
        op=menu();
        switch(op){
            case 1:{
                cout<<"Ingrese numero: ";
                int n;
                cin>>n;
                prio.push(n);
                break;
            }
            case 2:{
                cout<<"Mayor sacado: "<<prio.top()<<"\n";
                prio.pop();
                break;
            }
            case 3:{
                cout<<"Mayor: "<<prio.top()<<"\n";
                break;
            }
            case 4:{
                priority_queue<int>copy=prio;
                cout<<"Prior queue:\n";
                while(!copy.empty()){
                    cout<<copy.top()<<"\n";
                    copy.pop();
                }
                break;
            }
        }
        cout<<"Presione una tecla para continuar...";
        getch();
        system("cls");
    }
    return 0;
}