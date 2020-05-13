class Solution {
public:
    int myAtoi(string str) {
        int i = 0; bool hasMinus = false;
        unsigned long answer = 0;
        
        while (str[i] == ' ')
            i++;

        // now  str[i] is first non-' ' character
        if (str[i] == '-') {
            hasMinus = true;
            i++;
        } else if (str[i] == '+'){
            hasMinus = false;
            i++;
        }
        
        if (str[i] < 48 || str[i] > 57)
            return 0;
        while (str[i] >= 48 && str[i] <= 57){
            if (str[i] == '0' && answer == 0){}
            else if (!hasMinus && answer*10 + str[i] - 48 > INT_MAX)
                return INT_MAX;
            else if (hasMinus && answer*10 + str[i] - 49 > INT_MAX)
                return INT_MIN;
            else {
                answer *= 10;
                answer += str[i] - 48;
            }
            i++;
        }
        
        return hasMinus ? -answer : answer;
    }
};
