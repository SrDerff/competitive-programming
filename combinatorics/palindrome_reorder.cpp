#include <bits/stdc++.h>
using namespace std;

using ull= unsigned long long;
using ll = long long;

int main(){
    string s;
    cin>>s;
    map<char,int>freq;
    ull odd_count=0;
    for(auto &x: s){
        freq[x]++;
    }
    for(auto &x: freq){
        if(x.second%2!=0) odd_count++;
    }
    if(s.size()%2==0 && odd_count>0 || s.size()%2!=0 && odd_count<=0 || s.size()%2!=0 && odd_count > 1){
        cout<<"NO SOLUTION";
        return 0;
    }

    vector<char>half;
    char odd_letter;
    ll odd_letter_count;
    for(auto &x: freq){
        if(x.second%2==0){
            for(ull i=0;i<x.second/2;i++){
                half.push_back(x.first);
            }
        }else{
            odd_letter=x.first;
            odd_letter_count=x.second;
        }
    }

    for(ull i=0;i<half.size();i++){
        cout<<half[i];
    }
    if(s.size()%2!=0){
        while(odd_letter_count--){
            cout<<odd_letter;
        }
    }
    for(ll i=half.size()-1;i>=0;i--){
        cout<<half[i];
    }
    return 0;
}