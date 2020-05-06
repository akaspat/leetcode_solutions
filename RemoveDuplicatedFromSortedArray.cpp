class Solution {
public:    
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        int index = 1;
        for (int i=1; i < nums.size(); i++){
            if (nums[i] != nums[i-1])
                nums[index++] = nums[i];
            else continue;
        }
        
        // cut size from nums.length() to index
        // example: before a={0,1,2,3,4}
        // a.resize(3);
        // after: a={0,1,2}
        
        nums.resize(index);
        
        return nums.size();
    }
};
