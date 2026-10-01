#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();

        int total=p.size();
        int count=0;

        vector<int>ans;

        vector<int>frq(26, 0);
        vector<int>curr(26, 0);

        for(int i=0;i<m;i++){
            frq[p[i]-'a']++;
            curr[p[i]-'a']++;
        }

        int slow=0;
        for(int i=0;i<n;i++){
            if(i-slow+1<=m){
                if(curr[s[i]-'a']){ 
                    curr[s[i]-'a']--; 
                    count++;
                    if(count==total) ans.push_back(i);
                }
            }
            else{
                if(frq[s[slow]-'a']>curr[s[slow]-'a']){
                    curr[s[slow]]++;
                    count--;
                }
            }
        }
    }
};