#include <iostream>
using namespace std;
int main() {
    int arr[] = {0,1,0,0,1,1,0,1,1,1,0,1};
    int s = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    for(int i = 0; i < s; i++) {
        if(arr[i] == 1) {
            swap(arr[l], arr[i]);
            l++;
        }
    }
    for(int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}