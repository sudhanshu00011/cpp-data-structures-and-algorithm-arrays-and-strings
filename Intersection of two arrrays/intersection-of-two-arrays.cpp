class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) swap(nums1, nums2);
        multiset<int> s(nums1.begin(), nums1.end());
        vector<int> ans;
        for (int num : nums2) {
            if (s.count(num)) {
                ans.push_back(num);
                s.erase(s.find(num));
            }
        }
        return ans;
    }
};
