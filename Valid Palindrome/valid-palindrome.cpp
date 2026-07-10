class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1;
        while (i<j) {
            while (i<j && !isalnum(static_cast<unsigned char>(s[i]))) {
                i++;
            }
            while (i<j && !isalnum(static_cast<unsigned char>(s[j]))) {
                j--;
            }
            char l = tolower(static_cast<unsigned char>(s[i]));
            char r = tolower(static_cast<unsigned char>(s[j]));
            if (l!=r) return false;
            i++;
            j--;
        }
        return true;
    }
};
