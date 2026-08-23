#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p(3,4);
    pair<int,int>p2(4,3);
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    swap(p,p2);
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    p.swap(p2);
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    auto par = make_pair("XD", 4);
    cout<<par.first<<endl;
    cout<<par.second<<endl;

    return 0;
}