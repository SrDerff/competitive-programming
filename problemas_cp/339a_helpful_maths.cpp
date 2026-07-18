#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stringstream ss(s);
    vector<int>nums;
    string numC;
    while(getline(ss, numC, '+')){
        nums.push_back(stoi(numC));
    }
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
        if(i+1<nums.size()){
            cout<<"+";
        }
    }
    return 0;
}