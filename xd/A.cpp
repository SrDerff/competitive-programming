#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    int t;
    cin>>t;

    deque<char>dq;
    for(int i=0;i<s.size();i++){
        dq.push_back(s[i]);
    }

    int rev=0;
    while(t--){
        int q;
        cin>>q;
        if(q==1){
            rev++;
        }
        else{
            int f;
            cin>>f;
            char x;
            cin>>x;

            if(rev%2==0){
                if(f==2){
                    dq.push_back(x);
                }
                else dq.push_front(x);
            }
            else{
                if(f==1){
                    dq.push_back(x);
                }else dq.push_front(x);
            }
        }
    }

    if(rev%2!=0) reverse(dq.begin(), dq.end());
    for(auto it=dq.begin(); it!=dq.end(); it++) cout<<*it;
    return 0;
}