//Leetcode Problem 125: Valid Palindrome

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        if (tolower(s[left]) != tolower(s[right])) {
            cout << "False" << endl;
            return 0;
        }
        left++;
        right--;
    }

    cout << "True" << endl;
    return 0;
}