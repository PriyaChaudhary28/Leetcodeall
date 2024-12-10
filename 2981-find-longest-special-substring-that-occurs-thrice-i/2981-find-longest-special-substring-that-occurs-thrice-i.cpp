class Solution {
public:
    int maximumLength(string s) {
    //this is more optimized form where we avoid the copy of the string 
        int n=s.length();
        map<pair<char,int>,int>mp;
        for(int i=0;i<n;i++){   //O(n2)
           char ch=s[i];
            int l=0;
            for(int j=i;j<n;j++){
                if(s[j]==ch){
                  l++;
                    mp[{ch,l}]++;
                }else{
                    break;
                }
            }
        }
        int result=0;
        for(auto &it:mp){
            int length=it.first.second;
            int freq=it.second;
            if(freq>=3 && length>result){
                result=length;
            }
        }
        return result==0?-1:result;
    }
};