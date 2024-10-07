class Solution {
public:
    int minLength(string s) {
       int j = -1;
        for (char c : s){
            if (j >= 0 && (s[j] == 'A' && c == 'B' || s[j] == 'C' && c == 'D'))
                j--;
            else
                s[++j] = c;
        }
        return j + 1;
    }
};