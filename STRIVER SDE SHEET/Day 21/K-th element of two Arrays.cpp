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
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int> ans=merge(a,a.size(),b,b.size());
        return ans[k-1];
    }
};