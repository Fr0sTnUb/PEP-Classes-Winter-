#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {120, -1, 3, 4, -2, 1, 5, -3};
    int window_size = 2;
    int max_sum = INT_MIN;

    for(int i = 0; i <= arr.size() - window_size; i++){
        int curr_sum = 0;
        for (int j = i; j < i + window_size; j++){
            curr_sum += arr[j];
        }
        if( curr_sum > max_sum){
            max_sum = curr_sum;
        }
    }
    cout << max_sum;
}

//Optimized Approach: Sliding Window Technique

/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {120, -1, 3, 4, -2, 1, 5, -3};
    int window_size = 2;
    int max_sum = INT_MIN;
    int curr_sum = 0;

    for(int i = 0; i < window_size; i++){
        curr_sum += arr[i];
    }
    max_sum = curr_sum;

    for(int i = window_size; i < arr.size(); i++){
        curr_sum += arr[i] - arr[i - window_size];
        if(curr_sum > max_sum){
            max_sum = curr_sum;
        }
    }
    cout << max_sum;
}
*/

//Using While Loop

/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {120, -2, 3, 4, -2, 1, 5, -3};
    int window_size = 2;
    int sum = 0;
    for (int i = 0; i < window_size; i++){
        sum += arr[i];
    }
    int max_sum = sum;
    int i = window_size;
    int start = 0;
    while(i < arr.size()){
        sum -= arr[start];
        sum += arr[i];
        max_sum = max(max_sum, sum);
        start++;
        i++;
        }
    cout << max_sum;
}
*/