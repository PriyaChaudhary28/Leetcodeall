class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>a(arr);
        sort(a.begin(),a.end());
        unordered_map<int,int>m;
        int r=1;
        for(int i=0;i<a.size();i++){
           if(m[a[i]]==0)
               m[a[i]]=r++;
        }
        for(int i=0;i<arr.size();i++){
         arr[i]=m[arr[i]];
        }
        return arr;
    }
};