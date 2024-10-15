class Solution {
    private:
    void solve(vector<int>nums,vector<vector<int>>&ans,int index){
     if(index>=nums.size()){
          if(find(ans.begin(),ans.end(),nums)==ans.end()){
            ans.push_back(nums);}
            return;
     }
     for(int i=index;i<nums.size();i++){
         swap(nums[index],nums[i]);
         solve(nums,ans,index+1);
         swap(nums[index],nums[i]);
     }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
        
    }
};