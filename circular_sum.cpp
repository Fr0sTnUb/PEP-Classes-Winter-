//GFG Problem: Pair in Sorted Rotated Array
#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        int smallest = 0;
        int largest = arr.size() - 1;
        int n = arr.size();
        

        for (int i = 0; i < n - 1; i++){
            if(arr[i] > arr[i+1]){
                smallest = i + 1;
                largest = i;
                break;
            }
        }
        while(smallest != largest){
            if(arr[smallest] + arr[largest] == target) return true;
            else if ((arr[smallest] + arr[largest]) < target) smallest = (smallest + 1) % n;
            else largest = (largest - 1 + n) % n;
        }
        return false;
    }
};