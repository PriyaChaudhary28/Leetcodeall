class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>sum(n,0);
        sum[0]=arr[0];
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]^arr[i];
        }
        vector<int>ans;
        for(vector<int>&q:queries){
            int l=q[0];
            int r=q[1];
            int x=sum[r]^(l==0?0:sum[l-1]);
            ans.push_back(x);
        }
        return ans;
    }
};