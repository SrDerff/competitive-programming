#include <bits/stdc++.h>
using namespace std;
int main(){
    tuple<int,int,int> x= make_tuple(3,4,5);
    auto&[num1,num2,num3]=x;
    cout<<get<0>(x);
    cout<<get<1>(x);
    cout<<get<2>(x);
    cout<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    return 0;
}