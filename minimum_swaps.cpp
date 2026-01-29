//Leetcode Problem 2134: Minimum Swaps to Group All 1's Together II

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        int window_size = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if(nums[i] == 1) window_size++;
        }

        int maxOnesInAWindow = 0;
        for (int i = 0; i < window_size; i++){
            if(nums[i] == 1) maxOnesInAWindow++;
        }

        int maxOnes = maxOnesInAWindow;
        int start = 0;
        int end = window_size;

        while(start < n){
            if(nums[start] == 1) maxOnesInAWindow--;
            if(nums[end % n] == 1) maxOnesInAWindow++;
            maxOnes = max(maxOnes, maxOnesInAWindow);
            start++;
            end++;
        }
        return window_size - maxOnes;
    }
};