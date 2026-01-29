//GFG Problem : Minimum Swaps and K Together

#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> arr = {2, 9, 5, 6, 3, 8, 7, 4, 1};
    int k = 5;
    int window_size = 0;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] <= k){
            count++;
        }
    }
    for(int i = 0; i < count; i++){
        if(arr[i] > k){
            window_size++;
        }
    }
    int a = window_size;
    int start = 0;
    int end = count;
    while(end < arr.size()){
        if(arr[start] > k){
            window_size--;
        }
        if(arr[end] > k){
            window_size++;
        }
        a = min(a, window_size);
        start++;
        end++;
    }
    cout << a;
}