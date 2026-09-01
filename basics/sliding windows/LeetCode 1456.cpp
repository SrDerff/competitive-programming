#include <bits/stdc++.h>
#define ll long long
using namespace std;

// TRICKY

class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int cnt=0;

        for(int i=0;i<k;i++){
            cnt+=isVowel(s[i]);
        }

        int ans=cnt;

        for(int i=1;i<n-(k-1);i++){
            cnt-=isVowel(s[i-1]);
            cnt+=isVowel(s[i+k-1]);
            ans=max(ans, cnt);
        }

        return ans;
    }

    bool isVowel(char x){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
            return true;
        }
        return false;
    }
};