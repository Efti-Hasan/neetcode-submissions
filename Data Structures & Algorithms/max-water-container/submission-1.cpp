class Solution {
public:
    int maxArea(vector<int>& height) { 

        int ans = INT_MIN;
        int l=0, r= height.size()-1;

        while(l<r){
            int area= min(height[l],height[r])*(r-l);
            if(height[l] < height[r] ) l++;
            else r--;
            ans = max(ans,area); 
        }
     return ans;
    }
};