#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int>cola;
    cola.push(1);
    cola.push(2);
    cola.push(3);
    cola.push(4);
    
    cout<<cola.front()<<endl;
    cola.pop();
    cout<<cola.front()<<endl;
    cola.pop();
    return 0;
}