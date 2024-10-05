class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // tc o(nlogn)
        // sc O(1)
        int n=s1.length();
        int m=s2.length();
        if(n>m)
            return false;
        sort(s1.begin(),s1.end());
        for(int i=0;i<=m-n;i++){
            string ss=s2.substr(i,n);
            sort(ss.begin(),ss.end());
            if(s1==ss)
                return true;
        }
        return false;
    }
};