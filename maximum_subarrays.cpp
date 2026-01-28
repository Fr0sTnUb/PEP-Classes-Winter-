//LeetCode Problem 53: Maximum Subarray

#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int max_sum = arr[0];
    int curr_max = arr[0];

    for(int i = 1; i < arr.size(); i++){
        curr_max += arr[i];
        max_sum = max(max_sum, curr_max);
        if(curr_max < 0){
            curr_max = 0;
        }   
    }
    return max_sum;
}