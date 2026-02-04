class solution {
    public:
    string firstRepeatedCharacter(string s) {
        int count[26] = {0};

        for (char c : s) {
            count[c - 'a']++;
            if (count[c - 'a'] == 2) {
                return string(1, c);
            }
        }
        return "-1";
    }           
}