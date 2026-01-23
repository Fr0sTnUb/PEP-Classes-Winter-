#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 10;
    int& ref = x; 
    cout << x << endl;
    cout << "Initial value: " << ref << endl;
    x = 20;
    cout << "value of: " << ref << endl;
    return 0;
}