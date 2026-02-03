//Leetcode Problem 3637: Trionic Array 
#include <iostream>
#include <vector>
using namespace std;

bool isTrionicArray(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[j] < arr[i]) {
                count++;
            }
        }       
        if (count != i) {
            return false;
        }
    }
    return true;
}

//Might be wrong 