/*
Verificar parentesis
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string w;
    cin>>w;
    stack<char>symbols;
    char x;
    bool v=true;
    int i=-1;
    while(++i<w.size()){
        x=w[i];
        if(!v) continue;
        if(x==')'){
            if(symbols.empty()){
                v=false;
                break;
            }
            symbols.pop();
            continue;
        }        
        symbols.push(x);
    }
    if(!symbols.empty()) v=false;
    cout<<(v?"yes":"no");
    return 0;
}