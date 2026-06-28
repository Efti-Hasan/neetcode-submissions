class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n1 = s1.size();
        int n2 = s2.size();

        if (n1 > n2) return false;

        vector<int> v1(26, 0),v2(26, 0);

        for (auto c : s1) v1[c - 'a']++;

        int l = 0, r = 0;

        while (r < n2) {
            v2[s2[r] - 'a']++;

            if ((r - l + 1) == n1) {

                if (v1 == v2) return true;
                v2[s2[l] - 'a']--;
                l++;
            }

            r++;
        }

        return false;
    }
};