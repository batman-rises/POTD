class Solution {
public:
    vector<int> merge(vector<int>& a, int m, vector<int>& b, int n) {
        int k=m+n-1;
        vector<int> ans(m+n);
        int i=m-1;
        int j=n-1;
        while(i>=0 && j>=0){

            int x=a[i];
            int y=b[j];

            if(x>y){
                ans[k--]=x;
                i--;
            }else{
                ans[k--]=y;
                j--;
            }
        }
        while(i>=0){
            ans[k--]=a[i--];
        
        }
        while(j>=0){
            ans[k--]=b[j--];
            
        }
        
        return ans;
    }
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int m=a.size();
        int n=b.size();
        vector<int> ans=merge(a,m,b,n);
        int len=ans.size();
        if(len%2==0){
            return ((ans[len/2]+ans[len/2 -1])/2.0);
        }else{
            return ans[len/2];
        }
    }
};