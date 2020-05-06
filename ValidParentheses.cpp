class Solution {
public:
    bool isValid(string s) {
        vector<char> buffer;
        buffer.reserve(s.size());
        buffer.push_back('!');
        
        for (auto c : s){
            if (c == ')' && buffer.back() == '(')
                buffer.pop_back();
            else if (c == '}' && buffer.back() == '{')
                buffer.pop_back();
            else if (c == ']' && buffer.back() == '[')
                buffer.pop_back();
            else
                buffer.push_back(c);   
        }
        return buffer.back() == '!' ? true : false;
    }
};
