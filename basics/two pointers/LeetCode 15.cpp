#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int k=i+1;
            int j=n-1;

            int sum=nums[i];
            while(k<j){
                int curr_sum=sum+nums[k]+nums[j];
                if(curr_sum>0){
                    j--;
                    continue;
                }
                if(curr_sum<0){
                    k++;
                    continue;
                }
                if(curr_sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(k<j && ans[ans.size()-1][2] == nums[k]) k++;
                }
            }
        }

        return ans;
    }
};