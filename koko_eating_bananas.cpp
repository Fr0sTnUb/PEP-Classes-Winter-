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