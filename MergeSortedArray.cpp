/* This is not the most effective solution, 
 * but i try to improve my algorithm skills,
 * because of i escape using <add elements and sort(begin, end)>
 */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int insert_index = 0;
        int value_index = 0;
        while ( value_index < n){
            if (nums1[insert_index] == nums2[value_index]){
                for (int t = nums1.size()-1; t != insert_index; t--){
                    nums1[t] = nums1[t-1];
                }
                insert_index++; value_index++;
            } else if (nums1[insert_index] > nums2[value_index]){
                for (int t = nums1.size()-1; t != insert_index; t--){
                    nums1[t] = nums1[t-1];
                }
                nums1[insert_index] = nums2[value_index];
                value_index++;
            } else if (insert_index >= m+value_index){
                nums1[insert_index] = nums2[value_index];
                value_index++;                
            } 
            else insert_index++;
        }
    }
};
