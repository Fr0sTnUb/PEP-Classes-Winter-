// //Quick Sort Algorithm Implementation in C++

// #include <iostream>
// #include <vector>
// using namespace std;

// void Partition(vector<int> &arr, int low, int high){
//     int pivot = arr[high];
//     int i = low - 1;
//     for( int j = low; j < high; j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
// }

// void QuickSort(vector<int> &arr, int low, int high){
//     if( low < high){
//         Partition(arr, low, high);
//         int pi = low;
//         for( int i = low; i < high; i++){
//             if(arr[i] < arr[high]){
//                 pi++;
//             }
//         }
//         QuickSort(arr, low, pi - 1);
//         QuickSort(arr, pi + 1, high);
//     }
// }

// int main(){
//     vector<int> arr = {10, 7, 8, 9, 1, 5};
//     int n = arr.size();
//     QuickSort(arr, 0, n - 1);
//     cout << "Sorted array: ";
//     for( int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

class Solution {
    public:
    int getPartition(vector<int>& nums, int low, int high){
        int pivot = nums[low];
        int i =  low;
        int j = high;
        while( i < j){
            while( i < high && nums[i] < pivot) i++;
            while( j > low && nums[j] > pivot) j--;
            swap(nums[i], nums[j]);
        }
        swap(nums[low], nums[j]);
        return j;
    }

    void quickSort(vector<int>& nums, int low, int high){
        if( low < high){
            int pi = getPartition(nums, low, high);
            quickSort(nums, low, pi - 1);
            quickSort(nums, pi + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums, 0, n - 1);
        return nums;
    }
};