class Solution {
public:
    bool isPalindrome(int x) {
        int right_x = x;
        if (x < 0)
            return false;
        // for testcase == INT_MAX
        unsigned int reverse_x = 0;
        while (right_x != 0){
            reverse_x = reverse_x * 10 + right_x % 10;
            right_x /= 10;
        } 
        return reverse_x == x;
    }
};
