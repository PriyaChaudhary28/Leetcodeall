class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq(begin(gifts),end(gifts));
        long long sum=0;
        for(int &i:gifts){//O(n)
             sum+=i;
        }
        long long mysum=0;
        while(k--){ //O(k)
           int maxe=pq.top();  //O(1)
            pq.pop(); //O(log(n))
            
            //floor taking
            int remaining=sqrt(maxe); //ignoring this time complexity
            mysum+=maxe-remaining;
            pq.push(remaining); //O(log(n))
        }
        return sum-mysum;
        
        //k*logn total
    }
};