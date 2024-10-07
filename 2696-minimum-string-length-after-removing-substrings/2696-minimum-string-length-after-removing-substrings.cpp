class Solution {
public:
    int minLength(string s) {
        stack<string>st;
        for(char i :s){
            
            if(!st.empty()&&st.top()=="A" && i=='B'){
                st.pop();
            }
            else if(!st.empty() && st.top()=="C" && i=='D'){
                st.pop();
            }else{
            st.push(string(1, i));
            }
}
        return st.size();
    }
};