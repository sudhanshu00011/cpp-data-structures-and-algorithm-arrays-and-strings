class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, char> mpps;
        unordered_map<char, char> mppt;
        for (int i=0; i<s.length(); i++) {
            if ((mpps.count(s[i]) && mpps[s[i]] != t[i]) ||
                (mppt.count(t[i]) && mppt[t[i]] != s[i])) {
                return false;
            }
            mpps[s[i]] = t[i];
            mppt[t[i]] = s[i];
        }
        return true;
    }
};
