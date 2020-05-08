class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {        
        int l = 0; int r = nums.size()-1; int mid;
        while (l <= r){
            mid = l + (r-l) / 2;
            if (target < nums[mid])
                r = mid-1;
            else if (target > nums[mid])
                l = mid+1;
            else return mid;
        }
        return l;
    }
};
