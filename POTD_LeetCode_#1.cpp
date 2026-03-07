//Leetcode Problem 1888: Minimum Number of Flips to Make the Binary String Alternating

class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string alt1, alt2;
        
        for(int i = 0; i < n; i++) {
            alt1 += (i % 2 == 0) ? '0' : '1';
            alt2 += (i % 2 == 0) ? '1' : '0';
        }
        
        int flips1 = 0, flips2 = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] != alt1[i]) flips1++;
            if(s[i] != alt2[i]) flips2++;
        }
        
        return min(flips1, flips2);
    }
};