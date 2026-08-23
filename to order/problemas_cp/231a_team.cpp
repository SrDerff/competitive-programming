#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tot=0;
    while(n--){
        int cont=0;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            cont+=x;
        }
        if(cont>1){
            tot++;
        }
    }
    cout<<tot;
    return 0;
}