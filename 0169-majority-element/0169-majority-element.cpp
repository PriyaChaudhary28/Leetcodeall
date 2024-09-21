class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            int s=n/2;
            if(i.second>s)
                return i.first;
        }
        return -1;
    }
};