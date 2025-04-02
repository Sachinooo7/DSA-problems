class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        int t=k;
        priority_queue<int> pq;
        for(int i:piles){
            pq.push(i);
        }
        while(t){
            int mxx=pq.top(); pq.pop();
            pq.push(mxx-floor(mxx/2));
            t--;
        }
        int mx=0;
        while(!pq.empty()){
           
            mx+=pq.top(); 
            pq.pop();

        }
        return mx;
    }
};