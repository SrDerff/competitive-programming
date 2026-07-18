#include <bits/stdc++.h>
using namespace std;

void print(deque<int>&dq){
    cout<<"[ ";
    for(auto &x: dq){
        cout<<x<<" ";
    }
    cout<<"]\n";
}

void slide(deque<int>&dq, int& startIndex, int& endIndex, int length, vector<int>&v){
    if(startIndex==0){
        for(int i=0;i<length;i++){
            dq.push_back(v[i]);
        }
        startIndex++;
        endIndex++;
        return;
    }

    if(endIndex>=v.size()) return;

    dq.pop_front();
    dq.push_back(v[endIndex]);

    startIndex++;
    endIndex++;
}

int main(){
    vector<int>v={1, 3, 5, 2, 8, 7, 6};
    deque<int>dq;
    int n=3;
    int startIndex=0;
    int endIndex=n-1;
    for(int i=n;i<=v.size();i++){
        slide(dq, startIndex, endIndex, n, v);
        print(dq);
    }
    return 0;
}