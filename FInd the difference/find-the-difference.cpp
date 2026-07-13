class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans =t.back();
        for (int i=0; i<s.size(); i++) {
            ans=ans^s[i];
            ans=ans^t[i];
        }
        return ans;
    }
};
