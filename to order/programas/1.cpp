/*
Implementa un sistema que permita:

1 Agregar estudiante

Nombre
Edad
Promedio

2 Mostrar estudiantes

3 Ordenar por nombre

4 Ordenar por promedio

5 Buscar estudiante

6 Mostrar estudiantes con promedio entre X y Y

7 Salir

Guarda cada estudiante como

tuple<string,int,double>
*/

#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int menu(){
    int op=-1;
    cout<<"1. Agregar Estudiante\n";
    cout<<"2. Mostrar estudiantes\n";
    cout<<"3. Ordenar por nombre\n";
    cout<<"4. Ordenar por promedio\n";
    cout<<"5. Buscar estudiante\n";
    cout<<"6. Mostrar promedios entre (X,Y)\n";
    cout<<"7. Salir\n";
    cout<<"\nOpcion: ";cin>>op;
    return op;
}

int main(){
    vector<tuple<string,int,double>>ests;
    int op=-1;
    while(op!=7){
        op=menu();
        switch(op){
            case 1:{
                string n;
                int e;
                double p;
                cin>>n>>e>>p;
                ests.push_back(make_tuple(n,e,p));
                cout<<"Agregado correctamente\n";
                _getch();
                system("cls");
                break;
            }
            case 2:{
                cout<<"Estudiantes:\n";
                for(auto x: ests){
                    cout<<get<0>(x)<<";";
                    cout<<get<1>(x)<<";";
                    cout<<get<2>(x)<<"\n";
                }
                getch();
                system("cls");
                break;
            }
            case 3:{
                using t_est=tuple<string, int, double>;
                auto comp = [](t_est n1, t_est n2){
                    return get<0>(n1)<get<0>(n2);
                };
                sort(ests.begin(), ests.end(), comp);
                for(auto x: ests){
                    cout<<get<0>(x)<<";";
                    cout<<get<1>(x)<<";";
                    cout<<get<2>(x)<<"\n";
                }
                getch();
                system("cls");
                break;
            }
            case 4:{
                using t_est=tuple<string, int, double>;
                auto comp = [](t_est n1, t_est n2){
                    return get<2>(n1)>get<2>(n2);
                };
                sort(ests.begin(), ests.end(), comp);
                                for(auto x: ests){
                    cout<<get<0>(x)<<";";
                    cout<<get<1>(x)<<";";
                    cout<<get<2>(x)<<"\n";
                }
                getch();
                system("cls");
                break;
            }
            case 5:{
                // string n; 
                // int e;
                // double p;
                // cin>>n>>e>>p;
                // bool f=false;
                // for(auto x: ests){
                //     int v1 = get<0>(x) == n;
                //     int v2 = get<1>(x) == e;
                //     int v3 = get<2>(x) == p;
                //     bitset<3>ms;
                //     ms[0]=v1;
                //     ms[1]=v2;
                //     ms[2]=v3;
                //     if(ms.all()){
                //         cout<<"Encontrado\n";
                //         f=true;
                //         break;
                //     }
                // }
                // if(!f){
                //     cout<<"No encontrado\n";
                // }

                string n;
                using t_est = tuple<string, int, double>;
                cin>>n;
                auto func = [&n](t_est& n1){
                    auto [nombre, edad, promedio]=n1;
                    return nombre==n;
                };
                auto it = find_if(ests.begin(), ests.end(), func);
                if(it==ests.end()){
                    cout<<"No encontrado\n";
                }else{
                    auto [nombre, edad, promedio] = *it; 
                    cout<<"Encontrado: "<<nombre<<";"<<edad<<";"<<promedio<<"\n";
                }
                getch();
                system("cls");
                break;
            }
            case 6:{
                int x,y;
                cin>>x>>y;
                pair<int,int>p(x,y);
                using t_est = tuple<string,int,double>;
                vector<t_est>copy=ests;
                auto comp = [](t_est n1, t_est n2){
                    return get<2>(n1) < get<2>(n2);
                };
                auto comp2 = [](double p, t_est n1){
                    return get<2>(n1) > p;
                };
                sort(copy.begin(), copy.end(), comp);
                auto it = upper_bound(copy.begin(), 
                    copy.end(), p.first, comp2);
                if(it==copy.end()){
                    cout<<"Sin resultados";
                    getch();
                    system("cls");
                    break;
                }
                bool found=false;
                int index=distance(copy.begin(), it);
                if(index>0 && get<2>(copy[index-1])==p.first){
                    string n=get<0>(copy[index-1]);
                    int e=get<1>(copy[index-1]);
                    double p=get<2>(copy[index-1]);
                    cout<<n<<"-"<<e<<"-"<<p<<"\n";
                    found=true;
                }
                for(int i=index;i<copy.size();i++){
                    if(get<2>(copy[i])>p.second) break;
                    string n=get<0>(copy[i]);
                    int e=get<1>(copy[i]);
                    double p=get<2>(copy[i]);
                    cout<<n<<"-"<<e<<"-"<<p<<"\n";
                    found=true;
                }
                if(!found) cout<<"No encontrado\n";
                getch();
                system("cls");
                break;
            }
        }
    }
    return 0;
}