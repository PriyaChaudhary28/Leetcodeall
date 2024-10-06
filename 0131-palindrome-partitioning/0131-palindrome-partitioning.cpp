class Solution {
    
    public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>p;
        solve(0,s,p,ans);
        return ans;
    }
    
    void solve(int index,string s,vector<string> &p , vector<vector<string>> &ans){
        if(index==s.size()){
            ans.push_back(p);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(ispalin(s,index,i)){
                p.push_back(s.substr(index, i - index + 1));
                solve(i+1,s,p,ans);
                p.pop_back();
            }
        }
    }
    bool ispalin(string s, int st,int e){
        while(st<=e){
            if(s[st++]!=s[e--])
                return false;
        
        }
        return true;
    }

};