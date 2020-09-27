class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascale_trangle(numRows, vector<int>(numRows));
        
        for (int i=0; i < numRows; i++){
            pascale_trangle[i][0] = 1;
            pascale_trangle[i][i] = 1;
            for (int j = 1; j < i; j++){
                pascale_trangle[i][j] = pascale_trangle[i-1][j-1] + pascale_trangle[i-1][j];
            }
            pascale_trangle[i].resize(i+1);
        }
        return pascale_trangle;
    }
};
