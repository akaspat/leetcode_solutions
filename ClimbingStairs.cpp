class Solution {
public:
    int climbStairs(int n) {
        if (n < 2) return n;
        
        int *answer = new int[n+1];
        memset(answer, 0, n+1);
        answer[0] = 0;
        answer[1] = 1;
        answer[2] = 2;
        
        for (int i=3; i <= n; i++){
            answer[i] = answer[i-1] + answer[i-2];
        }
        
        int a = answer[n];
        delete[] answer;
        
        return a;
    }
};
