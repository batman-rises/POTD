class Solution {
  public:
    bool canWePlace(vector<int> &stalls, int k,int maxDist){
        int cows=1;
        int lastCoordinate=stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-lastCoordinate >= maxDist){
                cows++;
                lastCoordinate=stalls[i];
            }
        }
        return (cows>=k);
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int maxi=*max_element(stalls.begin(),stalls.end());
        int mini=*min_element(stalls.begin(),stalls.end());
        int low=1;
        int high=maxi-mini;
        while(low<=high){
            int mid=(low+high)/2;
            if(canWePlace(stalls,k,mid)==true){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return high;
    }
};