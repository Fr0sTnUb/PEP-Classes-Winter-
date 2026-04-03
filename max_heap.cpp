//Max Heap Implementation in C++
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
};