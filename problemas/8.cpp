/*
8. Distintos

¿Cuántos números distintos hay?
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4,1,2,3,4,5,5,7,8,1};
    unordered_set<int>s;
    for(auto x: v){
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}