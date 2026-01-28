#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr;
    int target;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size()-2; i++){
        int finding_sum = target - arr[i];


        int low = i + 1;
        int high = arr.size() - 1;

        while(low < high){
            if(arr[low] + arr[high] == finding_sum){
                return true;
            }
            else if(arr[low] + arr[high] < finding_sum){
                low++;
            }
            else{
                high--;
            }
        }

    }
}