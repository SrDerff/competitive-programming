/*
3. Intervalo

Dado un arreglo y varios valores X, responde cuántos números están entre L y R.

Practica:

sort
lower_bound
upper_bound
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={4,12,3,4,5,6,7,8,9,4,5,6,87,1,10};
    int l,r;
    cin>>l>>r;
    sort(v.begin(), v.end());
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    auto first_it= lower_bound(v.begin(), v.end(), l);
    auto last_it=upper_bound(v.begin(), v.end(), r);
    cout<<distance(first_it, last_it);
}
