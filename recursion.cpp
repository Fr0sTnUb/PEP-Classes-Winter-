//Printing an array using recursion

#include <iostream>
#include <vector>
using namespace std;

int n;
void Array(vector<int> arr, int i){
    if( i == n){
        return;
    }
    cout << arr[i] <<" ";
    Array(arr, i + 1);
}

int main(){
    vector<int> arr = {5, 4, 9, 3, 2, 1};
    n = arr.size();
    Array(arr, 0);
    return 0;
}