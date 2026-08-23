#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main(){
    ull n;
    cin>>n;

    set<int>nums;
    for(int i=0;i<n;i++){
        nums.insert(i+1);
    }

    for(int i=0;i<n-1;i++){
        ull x;
        cin>>x;
        nums.erase(x);
    }

    for(auto&x: nums){
        cout<<x;
    }

    return 0;
}