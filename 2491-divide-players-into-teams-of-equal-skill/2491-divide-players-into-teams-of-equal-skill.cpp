class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0;
        int j=skill.size()-1;
        int s=skill[i]+skill[j];
        long long c=0;
        while(i<j){
            int cu=skill[i]+skill[j];
            if(cu!=s){
                return -1;
            }
            c+=(long long)(skill[i])*(long long)(skill[j]);
 i++; j--;
        }
        return c;
    }
};