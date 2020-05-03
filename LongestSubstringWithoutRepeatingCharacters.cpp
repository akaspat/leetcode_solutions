class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // key is current symbol in string, value is symbol's index
        // i will rollback to index+1, if character repeat
        // testcase: dvdf - then catch second 'd'(index:2), 
        // we rollback to index 1 - 'v'
        // line (19) - index:0
        // line (22) - index:1
        unordered_map<char, int> substr; 
        int current = 0;
        int max = 0;
        for (int i=0; i < s.length(); i++){
            if (substr.find(s[i]) == substr.end()){ // не повторяющийся
                current++;
                substr[s[i]] = i;
            } else {
                max = current > max ? current : max;
                i = substr[s[i]]; //this index will be ++. (line 22)
                substr.clear();
                current = 0;
            } // i++
        }
        max = current > max ? current : max; 
        return max;
    }
};
