class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        int sum=0;
        for(int &i:nums){
            sum=(sum+i)%p;
        }
        int t=sum%p;
        if(t==0){
            return 0;
        }
        unordered_map<int,int>mp;
        int curr=0;
        mp[0]=-1;
        
        int res=n;
        for(int j=0;j<n;j++){
              curr=(curr+nums[j])%p;
            
            int remain=(curr-t+p)%p;
            if(mp.find(remain)!=mp.end()){
                res=min(res,j-mp[remain]);
            }
            mp[curr]=j;
        }
            return res==n?-1:res;
        
        
    }
};