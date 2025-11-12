class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0,maxSum=INT_MIN;
        for(int vals:nums)
        {
            currentSum+=vals;
            maxSum=max(currentSum,maxSum);
            if(currentSum<0)
            {
                currentSum=0;
            }
        }
        return maxSum;
    }
    
};