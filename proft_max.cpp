#include <iostream>
using namespace std;

int main(){
    int a[6] = {7, 1, 5, 3, 6, 4};
    int max_profit = 0;
    int min_price = a[0];

    for(int i = 1; i < 6; i++){
        if (a[i] < min_price){
            min_price = a[i];
        }
        else{
            max_profit = max(max_profit, a[i] - min_price);
        }
    }
    cout << max_profit << endl;
}