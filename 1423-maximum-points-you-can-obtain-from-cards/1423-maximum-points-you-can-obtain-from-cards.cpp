class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0;
        int rightsum=0;
        int ri=cardPoints.size()-1;
        for(int i=0;i<k;i++) leftsum+=cardPoints[i];
        int maxi=leftsum;
        for(int i=k-1;i>=0;i--){
            leftsum=leftsum-cardPoints[i];
            rightsum=rightsum+cardPoints[ri];
            ri=ri-1;
            maxi=max(maxi,leftsum+rightsum);
        }
        
        return maxi;
    }
};
 