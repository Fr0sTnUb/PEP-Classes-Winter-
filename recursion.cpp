//Printing an array using recursion

// #include <iostream>
// #include <vector>
// using namespace std;

// int n;
// void Array(vector<int> arr, int i){
//     if( i == n){
//         return;
//     }
//     cout << arr[i] <<" ";
//     Array(arr, i + 1);
// }

// int main(){
//     vector<int> arr = {5, 4, 9, 3, 2, 1};
//     n = arr.size();
//     Array(arr, 0);
//     return 0;
// }

//Printing an array in reverse order using recursion

// #include <iostream>
// #include <vector>
// using namespace std;

// int n;
// void ReverseArray(vector<int> arr, int i){
//     if( i == n){
//         return;
//     }
//     ReverseArray(arr, i + 1);
//     cout << arr[i] <<" ";
// }
// int main(){
//     vector<int> arr = {5, 4, 9, 3, 2, 1};
//     n = arr.size();
//     ReverseArray(arr, 0);
//     return 0;
// }

//Printing a target element of an array using recursion

#include <iostream>
#include <vector>
using namespace std;

int n;
int TargetElement(vector<int> arr, int i, int target){
    if( i == n){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return TargetElement(arr, i + 1, target);
}

int main(){
    vector<int> arr = {5, 4, 9, 3, 2, 1};
    n = arr.size();
    int target = 6;
    int result = TargetElement(arr, 0, target);
    cout << result;
    return 0;
}
