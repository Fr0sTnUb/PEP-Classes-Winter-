//GFG Question: Reverse array in groups
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    for (int i = 0; i < arr.size(); i+= k){
        int left = i;
        int right = min(i + k - 1, (int)arr.size() - 1);
        while(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}