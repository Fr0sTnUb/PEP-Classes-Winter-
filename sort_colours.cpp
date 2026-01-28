//Leetcode Problem 75: Sort Colours

#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    int low = 0;
    int high = nums.size() - 1;

    int curr = 0;

    while(curr <= high){
        if (nums[curr] == 0){
            swap(nums[low], nums[curr]);
            low++;
            curr++;
        }
        else if (nums[curr] == 2){
            swap(nums[curr], nums[high]);
            high--;
        }
        else{
            curr++;
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}