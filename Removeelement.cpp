class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if (n==0)
            return 0;
        
        int end = n-1; int d = 0;
        while (end >= 0 && nums[end] == val){
            d++; end--;
        }
        
        for (int i=0; i <= n-d-1; i++){
            if (nums[i] == val){
                if (nums[n-1-d] != val){
                    nums[i] = nums[n-1-d];
                    d++;
                } else {
                    i--;
                    d++;
                }
            }
        }
        return n-d;
    }
};
