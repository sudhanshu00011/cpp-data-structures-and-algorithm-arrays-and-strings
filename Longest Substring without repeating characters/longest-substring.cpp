class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> v;
        for (int i=0; i<s.length(); i++) {
            if (find(v.begin(), v.end(), s[i]) != v.end()) {
                return v.size();
            }
            else v.push_back(s[i]);
        }
        return 0;
    }
};
