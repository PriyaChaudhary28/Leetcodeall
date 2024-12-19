class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int cumsum=0;
        int original=0;
        int count=0;
        for(int i=0;i<n;i++){
             cumsum+=arr[i];
            original+=i;
            if(cumsum==original){
                 count++;
            }
        }
        return count;
    }
};