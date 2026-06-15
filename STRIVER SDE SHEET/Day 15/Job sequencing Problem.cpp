class Solution{  
  public:  
    vector<int> JobScheduling(vector<vector<int>>& jobs) { 
        int n=jobs.size();

        //descending sorting on the basis of PROFIT
        auto mycmp=[](vector<int> &a,vector<int> &b){
            return a[2]>b[2];
        };
        sort(jobs.begin(),jobs.end(),mycmp);
        int maxDeadline=-1;
        for(auto j:jobs){
            maxDeadline=max(maxDeadline,j[1]);
        }
        vector<int> slots(maxDeadline+1,-1);
        int profit=0;
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int d=jobs[i][1];d>0;d--){
                if(slots[d] == -1){
                    slots[d]=1;
                    profit+=jobs[i][2];
                    cnt++;
                    break;
                }
            }
        }
        return {cnt,profit};
    } 
};