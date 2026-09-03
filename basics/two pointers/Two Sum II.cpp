#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();

        int i=0;
        int j=n-1;

        while(i<j){
            int ans=numbers[i]+numbers[j];
            if(ans<target){
                i++;
                continue;
            }
            if(ans>target){
                j--;
                continue;
            }
            if(ans==target) break;
        }

        return {i+1,j+1};
    }
};