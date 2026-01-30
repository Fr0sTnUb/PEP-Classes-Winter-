//GFG Problem Link: https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int left = 0;
        int right = arr.size() - 1;
        int ans = -1;
        while( left <= right){
            int mid = (right + left) / 2;
            if(arr[mid] > x ){
                right = mid - 1;
            }
            else if (arr[mid] <=  x){
                ans = mid;
                left = mid + 1;
            }
            else {
                return -1;
            }
        }
        return ans;
    }
};
