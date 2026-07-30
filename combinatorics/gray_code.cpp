#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

vector<string> grayCode(vector<string>prevCode, long long maxSize){
    if(prevCode.size()==maxSize) return prevCode;
    vector<string>ans;
    for(int i=0;i<prevCode.size();i++){
        ans.push_back("0"+prevCode[i]);
    }
    for(int i=prevCode.size()-1;i>=0;i--){
        ans.push_back("1"+prevCode[i]);
    }
    return grayCode(ans, maxSize);
}

/*
n: 1
0
1

n: 2
00
01
11
10
*/

int main(){
    ull n;
    cin>>n;
    vector<string>v={"0","1"};
    vector<string>ans=grayCode(v, pow(2,n));
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}