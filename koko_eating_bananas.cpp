//Leetcode Problem 875: Koko Eating Bananas

//Psuedo Code
/*
int main*(){

int maxSpeed = INT_MIN;
for(int i = 0; i < n; i++){
    if(a[i] > maxSpeed) maxSpeed = a[i];
    }
    int calculateTime(vector<int> piles, int speed){
    for(int i = 0; i < piles.size(); i++){
        time += ceil(double(piles[i]) / double(speed));
    }
}
    for(int speed = 1; speed <= maxSpeed; speed++){
        int time = calculateTime(piles, speed);
        if(time == h){
            return speed;
        }
    }
*/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxSpeed = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            if(piles[i] > maxSpeed) maxSpeed = piles[i];
        }
        int left = 1, right = maxSpeed;
        while(left < right){
            int mid = left + (right - left) / 2;
            int time = calculateTime(piles, mid);
            if(time <= h){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }

    int calculateTime(vector<int>& piles, int speed){
        int time = 0;
        for(int i = 0; i < piles.size(); i++){
            time += ceil(double(piles[i]) / double(speed));
        }
        return time;
    }
};