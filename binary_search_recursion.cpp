//Binary Search using Recursion

#include <iostream>
#include <vector>
using namespace std;

int n;
int BinarySearch(vector<int> arr, int target, int left, int right){
    while( left <= right ){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            return BinarySearch(arr, target, mid + 1, right);
        }
        return BinarySearch(arr, target, left, mid - 1);
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    n = arr.size();
    int target = 6;
    int left = 0;
    int right = n - 1;
    cout << BinarySearch(arr, target, left, right);
    return 0;
};