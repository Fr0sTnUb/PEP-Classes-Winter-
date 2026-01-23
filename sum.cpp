#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number n: ";
    std::cin >> n;
    
    int sum = n * (n + 1) / 2;
    
    std::cout << "Sum of 1 to " << n << " = " << sum << std::endl;
    return 0;
}