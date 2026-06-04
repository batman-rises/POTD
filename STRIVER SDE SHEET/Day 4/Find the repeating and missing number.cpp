class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> a) {
        int n=a.size();
        vector<int> hash(n+1,0);
        for(int a:a){
            hash[a]+=1;
        }
        int x=0,y=0;
        for(int i=1;i<=n;i++){
            if(hash[i]==2)x=i;
            if(hash[i]==0)y=i;

        }
        return {x,y};
    }
};