#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>symbols;
    int x;
    bool v=true;
    while(cin>>x){
        if(x==')'){
            if(symbols.empty()){
                v=false;
            }else{
                symbols.pop();
            }
        }
    }
    return 0;
}