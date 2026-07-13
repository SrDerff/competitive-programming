#include <bits/stdc++.h>
using namespace std;

struct Paciente{
    string nombre;
    int edad;
    int nivelGravedad;
};

int menu(){
    int op=-1;
    cout<<"1. Llega paciente normal\n";
    cout<<"2. Llega paciente urgente\n";
    cout<<"3. Llega paciente VIP al inicio\n";
    cout<<"4. Llega paciente VIP al final\n";
    cout<<"5. Atender al siguiente paciente\n";
    cout<<"6. Deshacer ultima cancion\n";
    cout<<"7. Mostrar pacientes normales\n";
    cout<<"8. Mostrar pacientes urgentes\n";
    cout<<"9. Mostrar pacientes VIP\n";
    cout<<"10. Mostrar historial\n";
    cout<<"10. Mostrar estado de camas\n";
    cout<<"10. Mostrar historial\n";
    cout<<"\nOpcion: ";cin>>op;
    return op;
}

int main(){
    
    return 0;
}