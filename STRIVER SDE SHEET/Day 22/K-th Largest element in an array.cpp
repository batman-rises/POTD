class Solution {
public:
    int kthLargestElement(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int n:nums){
            pq.push(n);
        }
        while(!pq.empty()){
            k--;
            if(k==0){
                int x=pq.top();
                return x;
            }
            pq.pop();
        }
        return -1;
    }
};