class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpps;
        unordered_map<char,int> mppt;
        if(s.size() != t.size()) return false;
        for (int i=0; i<s.size(); i++) {
            mpps[s[i]]++;
            mppt[t[i]]++;
        }
        for (int i=0; i<s.size(); i++) {
            if (mpps[s[i]] != mppt[s[i]]) return false;
        }
        return true;
    }
};
