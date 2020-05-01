class Solution {
public:
    int reverse(int x) {
        int ans = 0; // reverse number
        int prev_rev = 0; // prev reverse number. If ans = 5432, then prev_rev = 543
        bool hasMinus = false;
        if ( x < 0) {
            hasMinus = true;
            // INT(-2 147 483 648, 2 147 483 647)
            // and -(-2 147 483 648 ) is overflow
            if (x == INT_MIN) 
                return 0;
            x = -x;
        }
        
        while (x != 0){
            int d = x % 10;
            // check overflow
            // if INT_MAX > ans* 10 or (INT_MAX / 10 < ans)
            if (INT_MAX / 10 < ans)
                return 0;
            ans = ans*10 + d;
            prev_rev = ans;
            x /= 10;
        }
        if (hasMinus){
            return -ans;
        }
        else
            return ans;
    }
};
