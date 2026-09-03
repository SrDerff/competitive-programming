#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int slow=0;
        for(int fast=1;fast<n;fast++){
            if(nums[slow]!=0) slow++;
            if(nums[fast]!=0 && nums[slow]==0){
                swap(nums[slow++], nums[fast]);
            }
        }
    }
};