#include <iostream>
#include <vector>
using namespace std;

int findFirst(vector<int> &nums, int target){
    int left = 0;
    int right = nums.size() -1;
    int firstIndex = -1;
    while ( left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == target){
            firstIndex = mid;
            right = mid - 1;
        }
        else if( nums [mid] < target ){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
      }
    return firstIndex;
}

int findLast(vector<int> &nums, int target){
    int left = 0;
    int right = nums.size() -1;
    int lastIndex = -1;
    while ( left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == target){
            lastIndex = mid;
            left = mid + 1;
        }
        else if( nums [mid] < target ){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
      }
      return lastIndex;
}
vector<int> findFirstAndLastElement(vector<int> &nums, int target){
    int first = findFirst(nums, target);
    int last = findLast(nums, target);
    return {first, last};
}