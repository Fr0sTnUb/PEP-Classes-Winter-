//LeetCode Problem 1: Two Sum

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int target;
    cout << "Enter target: ";
    cin >> target;

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

// TIME COMPLEXITY: O(n^2)

    // for(int i = 0; i < n; i++){
    //     for (int j = i; j < n; j++){
    //         if(a[i] + a[j] == target){
    //             cout << a[i] << "+" << a[j]<< "True" << endl;
    //         }
    //     }
    // }
    // return false;

// OPTIMIZED APPROACH: TIME COMPLEXITY: O(n)

    unordered_set<int> hashTable;
    for(int i = 0; i < n; i++){
        int temp = target - a[i];

        if(hashTable.find(temp) != hashTable.end()){
            cout << a[i] << "+" << temp << " True" << endl;
            return true;
        }
        hashTable.insert(a[i]);
    }
    return false;
}
