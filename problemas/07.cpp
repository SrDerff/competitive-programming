/*
7. Palabra más frecuente
Enunciado típico

Dada una lista de palabras, encontrar cuál aparece más veces.

Ejemplo

Entrada

8
sol luna sol casa luna sol perro luna

Frecuencias

sol -> 3
luna -> 3
casa -> 1
perro -> 1
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    unordered_map<string, int>words;
    int max_count=-1;
    string max_word;
    while(cin>>s){
        words[s]++;
        if(words[s]>max_count){
            max_count=words[s];
            max_word=s;
        }
    }
    cout<<"max: \n";
    cout<<max_word<<" - "<<max_count<<"\n";

    cout<<"\n";

    for(auto x: words){
        cout<<x.first<<" - "<<x.second<<"\n";
    }
    return 0;
}