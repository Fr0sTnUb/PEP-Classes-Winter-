#include <iostream>
using namespace std;

void square(int& ref) {
    ref = ref * ref;
}
int main() {
    int n;
    cin >> n;
    square(n);
    cout << n << endl;
    return 0;
}