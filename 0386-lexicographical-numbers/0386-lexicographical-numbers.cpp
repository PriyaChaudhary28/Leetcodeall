class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>t;
        for(int i=1;i<=n;i++){
            string tm=to_string(i);
            t.push_back(tm);
        }
        vector<int>ans;
        sort(t.begin(),t.end());
        for(auto i:t){
          ans.push_back(stoi(i));
        }
        return ans;
    }
};