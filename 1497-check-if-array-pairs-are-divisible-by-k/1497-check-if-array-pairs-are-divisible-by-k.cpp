class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>m(k,0);
        for(int i:arr){
          int rem=i%k;
        if(rem<0){
     rem+=k;}
            m[rem]++;
        }
        if(m[0]%2!=0){
            return false;
        }
        for(int i=1;i<=k/2;i++){
        if(m[i]!=m[k-i]){
            return false;
        }
        }
        return true;
    }
};
