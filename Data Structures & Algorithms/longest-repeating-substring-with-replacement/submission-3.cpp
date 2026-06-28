class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size()==1) return 1;
        int l=0,r=0;
        int ans =0,freq=0;
        unordered_map<char,int>mp;

        while(r<s.size()){
           mp[s[r]]++;
           freq = max(freq, mp[s[r]]);
           
           while((r-l+1)- freq > k){
            mp[s[l]]--;
            l++;
           }
           ans = max(ans, (r-l+1));
           r++;
        }
        return ans;
    }
};
