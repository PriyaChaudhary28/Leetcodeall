class Solution {
public:
    int n;
    //upper bount of endtime
    int t[1000001][3];
    int bs(vector<vector<int>>& events,int endtime){
        int l=0;
        int r=n-1;
        int res=n;
        while(l<=r)
        {
          int mid=l+(r-l)/2;
            if(events[mid][0]>endtime){
            res=mid;
            r=mid-1;}
            else{
                l=mid+1;
            }
            
        }
        return res;
    }
    
    int solve(vector<vector<int>>& events, int i, int count){
        if(count==2 || i>=n){
              return 0;
        }
        
        if(t[i][count]!=-1){
            return t[i][count];
        }
        int nextind=bs(events,events[i][1]);
        
        int take=events[i][2] + solve(events,nextind,count+1);
        
        int nott=solve(events,i+1,count);
        
        return t[i][count]=max(take,nott);
    }
    int maxTwoEvents(vector<vector<int>>& events) {
        n=events.size();
        sort(begin(events),end(events));
        memset(t,-1,sizeof(t));
        
        int count=0;
        return solve(events,0,count);
    }
};