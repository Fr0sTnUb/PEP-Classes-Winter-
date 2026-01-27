#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // for (int i = 1 ; i < n; i++){
    //     if ( a[i] != 0){
    //         for ( int j = i - 1; j >= 0; j--){
    //             if ( a[j] == 0){
    //                 swap( a[j], a[j + 1]);
    //             }
    //         }
    //     }
    // }

    int left = 0;
    for (int i =0 ; i< n;i++){
        if(a[i] != 0){
            a[left] = a[i];
            left++;
        }
    }
    for ( int i = left; i < n; i++){
        a[i] = 0;
    }
    for ( int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}