//Leetcode Problem 70: Climbing Stairs (Using Recursion ) Gives TLE for some test cases

#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main(){
    int n;
    cin >> n;
    cout << climbStairs(n);
    return 0;
}

