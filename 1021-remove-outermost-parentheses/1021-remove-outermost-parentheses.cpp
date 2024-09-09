class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string ans="";
        int c=0;
        int i=0;
        while(i<n){
        if(s[i]=='('){
            if(c!=0){
                ans+=s[i];
            }
             c++;
        }
           
        else{
            if(c>1){
                ans+=s[i];
            }
            c--;
        }
          i++;  
        }
       return ans; 
    }
};