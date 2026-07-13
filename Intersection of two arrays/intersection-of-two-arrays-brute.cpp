class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set;
        for (int i=0; i<min(nums1.size(),nums2.size()); i++) {
            if ((nums1.size() <= nums2.size()) && find(nums2.begin(), nums2.end(), nums1[i])!= nums2.end()) {
                set.insert(nums1[i]);
            }
            else if ((nums2.size() < nums1.size()) && find(nums1.begin(), nums1.end(), nums2[i])!= nums1.end()) {
                set.insert(nums2[i]);

            }
        }
        return vector<int> (set.begin(), set.end());
    }
};
