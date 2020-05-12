class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int current_index = digits.size() - 1;
        while (current_index >= 0){
            if (digits[current_index] + 1 < 10){
                digits[current_index]++;
                break;
            }
            
            if (current_index == 0){
                digits[current_index] = 0;
                digits.insert(digits.begin(), 1);
                break;
            }
            else {
                digits[current_index--] = 0;
            }
        }
        return digits;
    }
};
