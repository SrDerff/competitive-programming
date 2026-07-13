#include <bits/stdc++.h>
using namespace std;

int main(){
    //max heap, top es el de mayor prioridad
    priority_queue<int>max_heap;
    max_heap.push(3);
    max_heap.push(4);
    max_heap.push(1);
    max_heap.push(2);

    cout<<max_heap.top()<<endl;
    max_heap.pop();
    cout<<max_heap.top()<<endl<<endl;

    ///min heap, menor prioridad en top
    priority_queue<int, vector<int>, greater<int>>min_heap;
    min_heap.push(3);
    min_heap.push(4);
    min_heap.push(1);
    min_heap.push(2);

    cout<<min_heap.top()<<endl;
    min_heap.pop();
    cout<<min_heap.top();
    return 0;
}