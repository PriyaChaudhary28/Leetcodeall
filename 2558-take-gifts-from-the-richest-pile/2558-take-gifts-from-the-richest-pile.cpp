class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq(begin(gifts),end(gifts));
        long long sum=0;
        for(int &i:gifts){//O(n)
             sum+=i;
        }
        
        while(k--){ //O(k)
           int maxe=pq.top();  //O(1)
            pq.pop(); //O(log(n))
            
            //floor taking
            int remaining=sqrt(maxe); //ignoring this time complexity
            sum-=(maxe-remaining);
            pq.push(remaining); //O(log(n))
        }
        return sum;
        
        //k*logn total
    }
};