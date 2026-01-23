#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    unordered_map<int, int> freq;
    int maxCount = 0;
    
    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        maxCount = max(maxCount, freq[arr[i]]);
    }
    
    cout << "Maximum count: " << maxCount << endl;
    
    return 0;
}