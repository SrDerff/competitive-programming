#include <bits/stdc++.h>
#define ll long long
using namespace std;

//not the most efficent

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;

        int cnt=0;
        int ans=0;
        unordered_set<char>st;

        for(int r=0;r<n;r++){
            if(!st.count(s[r])){
                st.insert(s[r]);
                cnt++;
                ans=max(cnt, ans);
                continue;
            }

            while(st.count(s[r])){
                st.erase(s[l]);
                cnt--;
                l++;
            }

            st.insert(s[r]);
            cnt++;
        }

        return ans;
    }
};