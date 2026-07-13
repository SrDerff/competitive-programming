/*
Programa 2 — Analizador de Texto

Este es el siguiente que te recomiendo hacer.

Objetivo

Dominar completamente:

map
unordered_map
set
multiset
Menú
1. Ingresar texto

2. Mostrar frecuencia de palabras

3. Mostrar palabras únicas

4. Buscar una palabra

5. Eliminar una palabra

6. Mostrar palabras ordenadas alfabéticamente

7. Mostrar palabras ordenadas por frecuencia

8. Mostrar las N palabras más frecuentes

9. Salir
*/
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int menu(){
    int op=-1;
    cout<<"1. Ingresar texto\n";
    cout<<"2. Mostrar frecuencia de palabras\n";
    cout<<"3. Mostrar palabras unicas\n";
    cout<<"4. Buscar una palabra\n";
    cout<<"5. Eliminar una palabra\n";
    cout<<"6. Palabras ordenadas alfb.\n";
    cout<<"7. Palabras ordenadas freq.\n";
    cout<<"8. Palabras agrupadas freq.\n";
    cout<<"9. Mostrar las N palabras freq.\n";
    cout<<"10. Salir\n";
    cout<<"\nOpcion: ";cin>>op;
    return op;
}

int main(){
    int op=-1;
    string text="";
    unordered_map<string, int>palabras;
    set<string>uniq_palabras;
    map<int, vector<string>>grp_palabras;
    vector<pair<int, string>>ord_palabras;
    while(op!=10){
        op=menu();
        switch(op){
            case 1:{
                string s;
                cin>>s;
                text+=" "+s;
                palabras[s]++;
                uniq_palabras.insert(s);
                
                getch();
                system("cls");
                break;
            }
            case 2:{
                cout<<"Frecuencia:\n";
                for(auto &x: palabras){
                    cout<<x.first<<": "<<x.second<<"\n";
                }
                getch();
                system("cls");
                break;
            }
            case 3:{
                cout<<"Palabras unicas:\n";
                for(auto &x: uniq_palabras){
                    cout<<x<<"\n";
                }
                getch();
                system("cls");
                break;
            }
            case 4:{
                string s;
                cin>>s;
                int index = text.find(s);
                if(index!=string::npos){
                    cout<<"Palabra encontrada en: "<<index;
                }else{
                    cout<<"Palabra no encontrada\n";
                }
                getch();
                system("cls");
                break;
            }
            case 5:{
                string s;
                cin>>s;
                int index = text.find(s);
                s.erase(index, s.size());
                palabras[s]--;
                if(!palabras[s]){
                    palabras.erase(s);
                }
                uniq_palabras.erase(s);
                getch();
                system("cls");
                break;
            }
            case 6:{
                cout<<"Ordenado alfabeticamente:\n";
                for(auto &x: uniq_palabras){
                    cout<<x<<"\n";
                }
                getch();
                system("cls");
                break;
            }
            case 7:{
                cout<<"Ordenado por frecuencia:\n";
                for(auto &pair: palabras){
                    ord_palabras.push_back(
                        make_pair(pair.second, pair.first)
                    );
                }
                sort(ord_palabras.begin(), ord_palabras.end(),
                    [](pair<int,string>p1, pair<int,string>p2){
                        return p1.first<p2.first;
                    }
                );
                for(auto pair: ord_palabras){
                    cout<<pair.first<<": "<<pair.second<<"\n";
                }
                cout<<"\n";
                ord_palabras.clear();
                getch();
                system("cls");
                break;
            }
            case 8:{
                

                cout<<"Agrupado por frecuencia:\n";
                for(auto &x: grp_palabras){
                    cout<<x.first<<": ";
                    for(auto &p: x.second){
                        cout<<p<<" ";
                    }
                    cout<<"\n";
                }
                grp_palabras.clear();
                getch();
                system("cls");
                break;
            }
            case 9:{
                int n;
                cin>>n;
                int count=0;
                bool complt=false;
                cout<<"N palabras mas frecuentes:\n";
                for(auto &p: grp_palabras){
                    for(auto &x: p.second){
                        if(count>n || count > palabras.size()){
                            complt=true;
                            break;
                        }
                        cout<<x<<"\n";
                        count++;
                    }
                    if(complt) break;
                }
                getch();
                system("cls");
                break;
            }   
        }
    }

    return 0;
}