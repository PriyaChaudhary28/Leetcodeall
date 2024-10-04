class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        vector<int>v(1001,0);
        int sum=0;
        for(int &i:skill){
            sum+=i;
            v[i]++;
        }
        int t=n/2;
        if(sum%t!=0) return -1;
        
        int target=sum/t;
        long long c=0;
        for(int i=0;i<n;i++){
        int cu=skill[i];
        int rem=target-cu;
        if(v[rem]<=0){
            return -1;
        }
            c+=(long long)cu*(long long)(rem);
            v[rem]-=1;
        }
        return c/2;
    }
};