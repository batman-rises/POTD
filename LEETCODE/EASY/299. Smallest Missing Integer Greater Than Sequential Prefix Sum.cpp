class Solution {
public:
    int missingInteger(vector<int>& a) {
        int x=a[0];
        int n=a.size();
        if(n==1)return a[0]+1;

        unordered_map<int,int> mp;
        for(int i:a){
            mp[i]=1;
        }
       // sort(a.begin(),a.end());
        int s=a[0];
        for(int i=1;i<n;i++){
            if(x+1==a[i]){
                s+=a[i];
                x=a[i];
            }else{
                while(mp.find(s)!=mp.end()){
                    s++;
                }
                    return s;
                
            }
        }
        return s;
    }
};