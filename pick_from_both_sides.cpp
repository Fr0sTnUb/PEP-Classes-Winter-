#include <iostream>
using namespace std;

int main() {
    int n, B;
    cout << "Enter size of array (N): ";
    cin >> n;
    
    int* A = new int[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> A[i];
    
    cout << "Enter B: ";
    cin >> B;
    
    if (B > n) {
        cout << "B cannot be greater than N" << endl;
        delete[] A;
        return 1;
    }
    
    int sum = 0;
    for (int i = 0; i < B; i++) sum += A[i];
    int max_sum = sum;
    
    for (int i = 0; i < B; i++) {
        sum = sum - A[B - 1 - i] + A[n - 1 - i];
        max_sum = max(max_sum, sum);
    }
    
    cout << "Maximum possible sum: " << max_sum << endl;
    return 0;
}
