#include <iostream>
using namespace std;
 
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10,11}
    };
    int dir = 0;
    int left = 0; 
    int right = 2;
    int top = 0;
    int bottom = 2;
    while(left <= right && top <= bottom){
        if (dir == 0){
            for (int i = left; i <= right; i++){
                cout << arr[top][i] << " ";
            }
            top++;
            dir=1;
        }
        if(dir == 1){
            for (int i = top; i <= bottom; i++){
                cout << arr[i][right] << " ";
            }
            right--;
            dir = 2;
        }
        if(dir == 2){
            for (int i = right; i >= left; i--){
                cout << arr[bottom][i] << " ";
            }
            bottom--;
            dir = 3;
        }
        if(dir == 3){
            for (int i = bottom; i >= top; i--){
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}