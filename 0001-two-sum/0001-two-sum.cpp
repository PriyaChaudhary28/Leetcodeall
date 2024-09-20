class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int s=target-a;
            if(m.find(s)!=m.end()){
                return {m[s],i};
            }
            m[a]=i;
        }
        return {-1,-1};
    }
};