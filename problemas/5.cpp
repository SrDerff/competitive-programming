/*
5. Moda

Encontrar el número que más aparece.

Practica

map
unordered_map
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    unordered_map<int,int>freq;
    int max_frq=-1;
    int max_n;
    for(auto &x: v){
        cin>>x;
        freq[x]++;
        if(freq[x]>max_frq){
            max_frq=freq[x];
            max_n=x;
        }
    }
    cout<<"n: "<<max_n<<" freq: "<<max_frq;
    return 0;
}