#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    bool isLetter(char s){
        return isalnum(s);
    }
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;

        while(i<j){
            if(!isLetter(s[i])){
                i++;
                continue;
            }
            if(!isLetter(s[j])){
                j--;
                continue;
            }

            if(tolower(s[i])!=tolower(s[j])) return false;
            i++;
            j--;
        }

        return true;
    }
};