#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>symbols;
    int x;
    while(cin>>x){
        symbols.push(x);
    }
    while(!symbols.empty()){
        cout<<symbols.top();
        symbols.pop();
    }
    return 0;
}