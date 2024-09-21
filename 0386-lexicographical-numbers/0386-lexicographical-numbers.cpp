class Solution {
private:
    vector<int>res;
    void ans(int i,int n){
        if(i>n) return;
        res.push_back(i);
        for(int j=0;j<=9;j++){
        ans(10*i+j,n);
        }
}
public:
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<=9;i++){
         ans(i,n);
        }
        return res;
    }
};