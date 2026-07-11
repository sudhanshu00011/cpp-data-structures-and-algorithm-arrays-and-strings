class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        if (n==1) return true;
        while (n>1) {
            long sum=0;
            while (n>=1) {
                int a = n%10;
                n/=10;
                sum+=a*a;
            }
            if (sum==1) return true;
            n=sum;
            if (seen.count(n)) return false;
            seen.insert(n);
        }
        return false;
    }
};
