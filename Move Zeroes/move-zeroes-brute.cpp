class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        for (int i=0; i<nums.size() ; i++) {
            if (nums[i] != 0) {
                nums.insert(nums.begin()+cnt, nums[i]);
                nums.erase(nums.begin()+i+1);
                cnt++;
            }
        }
    }
};
