class Solution{
public:
    int longestSubarray(vector<int> &a, int k){
        unordered_map<int,int> mp;
        mp[0]=1;
        int n=a.size();
        int s=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            s+=a[i];
            if(s==k){
                maxi=max(maxi,i+1);
            }
            int rem=s-k;
            if(mp.find(rem) != mp.end()){
                int len=i-mp[rem];
                maxi=max(maxi,len);
            }
            if(mp.find(s) == mp.end()){
                mp[s]=i;
            }
        }
        return maxi;
    }
};
