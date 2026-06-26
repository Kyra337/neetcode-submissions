class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numcpy;
        for (int i = 0; i < nums.size(); i++) {
            if (numcpy.find(nums[i]) == numcpy.end()) {
                numcpy.insert(nums[i]);
            }
            else {
                return true;
            }
        }
        return false;
    }
};