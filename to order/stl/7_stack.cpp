#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);

    cout<<pila.top()<<endl;
    pila.pop();
    cout<<pila.top()<<endl;
    pila.pop();
    return 0;
}