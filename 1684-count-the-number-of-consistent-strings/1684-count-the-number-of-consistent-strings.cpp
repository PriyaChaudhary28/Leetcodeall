class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>s;
        for(auto x:allowed){
            s.insert(x);
        }
        int c=0;
        for(auto wrd:words){
            bool st=true;
            for(int i=0;i<wrd.size();i++){
                 if(s.find(wrd[i])==s.end()){
                     st=false;
                     break;
                 }
            }
            if(st==true) c++;
        }
        return c;
    }
};