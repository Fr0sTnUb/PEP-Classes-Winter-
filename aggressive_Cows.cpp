//Geeks For Geeks Problem Link: https://practice.geeksforgeeks.org/problems/aggressive-cows-1587115620/1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int aggressiveCows(vector<int> &stalls, int k) {
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int left = 1;
    int right = stalls[n - 1] - stalls[0];
    int result = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int count = 1;
        int last_position = stalls[0];

        for (int i = 1; i < n; i++) {
            if (stalls[i] - last_position >= mid) {
                count++;
                last_position = stalls[i];
            }
        }

        if (count >= k) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}