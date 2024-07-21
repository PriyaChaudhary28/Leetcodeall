class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c=0;
        int cn=0;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) c++;
            else if(nums[i]==1) cn++;
            else cnt++;
        }
        for(int i=0;i<c;i++){
            nums[i]=0;
        }
        for(int i=c;i<c+cn;i++){
            nums[i]=1;
        }
        for(int i=c+cn;i<n;i++){
            nums[i]=2;
        }
       
     
    }
};