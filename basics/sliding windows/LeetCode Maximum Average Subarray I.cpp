#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ll n=nums.size();

        double curr_sum=0;
        for(int i=0;i<k;i++){
            curr_sum+=nums[i];
        }
        double max_sum=curr_sum;

        for(int i=1;i<n-(k-1);i++){
            curr_sum-=nums[i-1];
            curr_sum+=nums[i+k-1];

            max_sum=max(curr_sum, max_sum);
        }

        return max_sum/k;
    }
};