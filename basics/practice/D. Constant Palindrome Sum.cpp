#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int i=0,j=n-1;
        int minN=INT_MAX;
        map<int,int>frqSums;
        int q=0;
        while(i<j){
            minN=min(minN, max(v[i],v[j]));
            frqSums[v[i]+v[j]]++;
            i++;
            j--;
        }
        
        int maxSum=minN+k;
        int ansSum;
        int maxFrq=INT_MIN;

        for(auto x: frqSums){
            if(x.first>maxSum) break;
            if(x.second>maxFrq){
                maxFrq=x.second;
                ansSum=x.first;
            }
        }

        i=0,j=n-1;
        int ans1=0,ans2=0;
        while(i<j){
            if (v[i] + v[j] == ansSum) {
            }
            else if (min(v[i],v[j])+1<=ansSum && ansSum<=max(v[i],v[j])+k) {
                ans1++;
            }
            else {
                ans1+=2;
            }
            i++;
            j--;
        }
        i=0,j=n-1;

        i=0,j=n-1;

        while(i<j){
            if(v[i]+v[j] == maxSum){
            }
            else if(min(v[i],v[j])+1<=maxSum && maxSum<=max(v[i],v[j])+k){
                ans2++;
            }
            else{
                ans2+=2;
            }
            i++;
            j--;
        }
        
        cout<<min(ans1,ans2)<<"\n";
    }
    return 0;
}