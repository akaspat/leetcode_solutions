class Solution {
public:
    int mySqrt(int x) {
        unsigned int div = x; int result = x;
        if (x == 0)
            return 0;
        while (true){
            div = (x / div + div) / 2;
            if (result > div) result = div;
            else return result;
        }
    }
};
