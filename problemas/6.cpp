/*
6. Primera palabra repetida
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    unordered_set<string>words;
    string word;
    bool found=false;
    while(cin>>s){
        if(words.count(s) && !found){
            word=s;
            found=true;
        }
        words.insert(s);
    }
    cout<<(found?word:"not found");
    return 0;
}
