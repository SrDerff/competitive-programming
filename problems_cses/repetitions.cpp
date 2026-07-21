#include <bits/stdc++.h>
using namespace std;
using ull= unsigned long long;

int main(){
    string s;
    cin>>s;
    int longest=1;
    int count=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count++;
            if(count>longest) longest=count;
            continue;
        }
        count=1;
    }
    cout<<longest;
    return 0;
}