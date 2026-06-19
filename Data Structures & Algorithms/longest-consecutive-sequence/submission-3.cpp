#include<bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0) return 0;

        sort(nums.begin(), nums.end());
        int s = 1, ans = 1;
        for(int i = 1; i < n; i++) {
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1] + 1) {
                s++;
            } 
            else s = 1;
            ans = max(ans, s);
        }
        return ans;
    }
};
