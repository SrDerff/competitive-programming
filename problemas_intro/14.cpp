#include <bits/stdc++.h>
using namespace std;

void printPrio(priority_queue<int, vector<int>, greater<int>>prio){
    while(!prio.empty()){
        cout<<prio.top()<<" ";
        prio.pop();
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>>prio;
    while(n--){
        int x;
        cin>>x;
        prio.push(x);
    }
    while(prio.size()>1){
        int e1, e2;
        e1=prio.top();
        prio.pop();
        e2=prio.top();
        prio.pop();
        int newE=e1+e2;
        prio.push(newE);
        printPrio(prio);
    }
    cout<<prio.top();
    return 0;
}