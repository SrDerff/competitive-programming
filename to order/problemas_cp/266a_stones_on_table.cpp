#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char x;
    cin>>x;
    n--;
    int cont=0;
    while(n--){
        char d;
        cin>>d;
        if(d!=x){
            x=d;
            continue;
        }else{
            cont++;
        }
    }
    cout<<cont;
    return 0;
}