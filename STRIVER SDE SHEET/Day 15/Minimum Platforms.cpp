class Solution {
  public:
    int minPlatform(vector<int>& arv, vector<int>& dep) {
        // code here
        sort(arv.begin(),arv.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0;
        int n=arv.size();
        int cnt=0,maxi=0;
        while(i<n){
            if(arv[i] <= dep[j]){
                cnt++;
                i++;
            }else{
                cnt--;
                j++;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
