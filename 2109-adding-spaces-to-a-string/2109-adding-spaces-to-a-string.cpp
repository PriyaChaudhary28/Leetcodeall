class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m=s.length();
        int n=spaces.size();
        string res="";
        int j=0;
        for(int i=0;i<m;i++){
            if(j<n && i==spaces[j]){
           res+=" ";
            j++;}
            res+=s[i];
            
            
}
        return res;
    }
};