class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int k=m+n-1;
        
        int i=m-1;
        int j=n-1;
        while(i>=0 && j>=0){

            int x=a[i];
            int y=b[j];

            if(x>y){
                a[k--]=x;
                i--;
            }else{
                a[k--]=y;
                j--;
            }
        }
        while(i>=0){
            a[k--]=a[i--];
        
        }
        while(j>=0){
            a[k--]=b[j--];
            
        }
        
        return;
    }
};