#include <bits/stdc++.h>
using namespace std;

void printDq(deque<int>&dq){
    cout<<"[ ";
    for(auto &x: dq){
        cout<<x<<" ";
    }
    cout<<"]\n";
}

int main(){
    vector<int>nums={1, 3, 5, 2, 8, 7, 6};
    deque<int>dq;
    int n=3;
    for(int i=0;i<n;i++){
        dq.push_back(nums[i]);
    }
    printDq(dq);
    for(int i=n;i<nums.size();i++){
        dq.pop_front();
        dq.push_back(nums[i]);
        printDq(dq);
    }
    return 0;
}