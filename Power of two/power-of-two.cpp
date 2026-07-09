class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0; //[New Learning]A power of two has exactly one set bit.
    }
};
