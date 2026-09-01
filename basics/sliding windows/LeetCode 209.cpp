#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        int curr=0;

        int l=0;
        for(int r=0;r<n;r++){
            curr+=nums[r];

            while(curr>=target){
                ans=min(ans, r-l+1);

                curr-=nums[l];
                l++;
            }
        }

        return (ans!=INT_MAX?ans:0);
    }
};