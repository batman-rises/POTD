class Solution {
public:
    int minAbsoluteDifference(vector<int>& a) {
        int mini=1e9;
        for(int i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                if(a[i]==1 && a[j]==2 ||a[i]==2 && a[j]==1 ){
                    mini=min(mini,abs(j-i));
                }
            }
        }
        return mini!=1e9?mini:-1;
    }
};