class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mino=INT_MAX;
        int maxi=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
        mino=min(mino,prices[i]);
        maxi=max(maxi,prices[i]-mino);
        }
        return maxi;
    }
};