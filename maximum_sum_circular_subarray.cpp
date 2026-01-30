//Leetcode Problem 918: Maximum Sum Circular Subarray

class Solution {
public:
    int kadanesMax(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }

    int kadanesMin(vector<int>& nums) {
        int currSum = nums[0];
        int minSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currSum = min(nums[i], currSum + nums[i]);
            minSum = min(minSum, currSum);
        }
        return minSum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int maxLSum = kadanesMax(nums);

        int totalSum = 0;
        for (int x : nums) totalSum += x;

        int minSum = kadanesMin(nums);

        if (maxLSum < 0) return maxLSum;

        int circularSum = totalSum - minSum;
        return max(maxLSum, circularSum);
    }
};
