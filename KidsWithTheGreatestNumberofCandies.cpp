class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;
        answer.reserve(candies.size());

        int max_el = *max_element(candies.begin(), candies.end());
        for (int i=0; i < candies.size(); i++){
            if (candies[i] + extraCandies >= max_el)
                answer.push_back(true);
            else
                answer.push_back(false);
        }
        return answer;
    }
};
