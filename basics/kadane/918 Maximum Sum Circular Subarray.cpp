/*
leetcode exercise
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        ll n=nums.size();

        ll ttSum=nums[0];

        ll maxKadane=nums[0];
        ll currMax=nums[0];

        ll minKadane=nums[0];
        ll currMin=nums[0];

        for(int i=1;i<nums.size();i++){
            ll x=nums[i];

            ttSum+=nums[i];

            currMax=max(currMax+x, x);
            currMin=min(currMin+x, x);

            maxKadane=max(currMax, maxKadane);
            minKadane=min(currMin, minKadane);
        }

        ll ans=max(maxKadane, ttSum-minKadane);
        if(!ans) ans=maxKadane;

        return ans;
    }
};