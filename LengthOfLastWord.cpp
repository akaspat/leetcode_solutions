class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;
        for (int i = s.length() - 1; i >= 0; i--){
            if (s[i] == ' ')
                if (counter != 0)
                    break;
                else
                    continue;
            counter++;
        }
        return counter;
    }
};
