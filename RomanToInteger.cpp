class Solution {
public:
    int romanToInt(string s) {
        map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        
        //IV - 4 
        //IX - 9 
        //XL, XC - 40 90
        // CD, CM - 400 900
        
        int number = 0; int last = -1; int cur = -1;
        for (auto c : s){
            cur = values[c];
            if (c == 'L' || c == 'C') {
                if (last == 10) {
                    number -= last;
                    cur -=last;
                }
            } else if (c == 'D' || c == 'M') {
                if (last == 100) {
                    number -= last;
                    cur -=last;
                }
            } else if (c == 'V' || c == 'X'){
                if (last == 1){
                    number -= last;
                    cur -=last;
                }
            }
            
            number += cur;
            last = cur;
        }
        return number;
    }
};
