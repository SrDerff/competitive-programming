/*
Time O(n)
Space O(n*n)
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    vector<vector<int>>v(5, vector<int>(5));
    pair<int,int>crd;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i][j]=x;
            if(x==1){
                crd.first=i;
                crd.second=j;
            }
        }
    }
    cout<<abs(crd.first-2)+abs(crd.second-2);
    return 0;
}