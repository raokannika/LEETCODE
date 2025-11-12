class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        int n = nums.size();

        int i = 0, j = n - 1;

        while (i < j) {
            int pairSum = nums[i] + nums[j];
            if (pairSum > target) {
                j--;
            } else if (pairSum < target) {
                i++;
            } else {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
        return {};
    }
};