#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int>cola_doble;
    cola_doble.push_back(1);
    cola_doble.push_front(2);
    cout<<cola_doble.front();
    cola_doble.pop_front();
    cout<<cola_doble.front();
    cola_doble.pop_front();
    return 0;
}