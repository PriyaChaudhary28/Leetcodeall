class Solution {
    private:
 void recur(vector<int>&ds,vector<int>& nums,vector<vector<int>>&a,int f[]){
   if(ds.size()==nums.size()){
         a.push_back(ds); 
         return;
   }
     for(int i=0;i<nums.size();i++){
         if(!f[i]){
          ds.push_back(nums[i]);
             f[i]=1;
             recur(ds,nums,a,f);
             f[i]=0;
             ds.pop_back();
         }
     }
 }
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>a;
        vector<int>ds;
        int f[nums.size()];
        for(int i=0;i<nums.size();i++) f[i]=0;
        recur(ds,nums,a,f);
        return a;
    }
};