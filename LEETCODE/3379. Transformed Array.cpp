class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& a) {
        int n=a.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(a[i]>0){
                res[i]=a[(i+a[i])%n];
            }else if(a[i]<0){
                
                int targetIndex = ((i + a[i]) % n + n) % n;
                res[i] = a[targetIndex];
            }else{
                res[i]=0;
            }
        }
        return res;
    }
};