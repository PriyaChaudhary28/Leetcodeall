class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stck;
        for (auto c : s) {
            if (stck.empty())
                stck.push(c);

            else if (stck.top() == '(' && c == ')') {
                stck.pop();
            } else {
                stck.push(c);
            }
        }
        return stck.size();
        
    }
};