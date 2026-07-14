class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};
        for (char c : s) freq[c]++;
        int ans = 0;
        bool odd = false;
        for (int f : freq) {
            ans += (f / 2) * 2;
            if (f % 2 == 1) odd = true;
        }
        return ans + odd;
    }
};
