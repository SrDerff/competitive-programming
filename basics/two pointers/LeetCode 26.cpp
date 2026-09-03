#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    //o(n) memory
    int xremoveDuplicates(vector<int>& nums) {
        map<int,int>frq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            frq[nums[i]]++;
        }
        int i=0;
        for(auto x: frq){
            nums[i++]=x.first;
        }
        return frq.size();
    }

    //o(1) memory
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        int n=nums.size();
        for(int fast=0;fast<n;fast++){
            if(nums[fast]>nums[slow]){
                nums[++slow]=nums[fast];
            }
        }
        return slow+1;
    }
};