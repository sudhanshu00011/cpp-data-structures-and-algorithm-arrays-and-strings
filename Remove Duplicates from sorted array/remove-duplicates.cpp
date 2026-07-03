class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        for (int i=1 ; i<nums.size() ; i++) {
            int prev= nums[i-1];
            if (prev==nums[i]) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
