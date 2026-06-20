    class Solution {
    public:
        int func(int n,int mid,int m){
    int ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*mid;
            if(ans>m)return 2;
        }
        return (ans==m)?1:0;
        }
        
    int NthRoot(int n, int m) {
        int l=1;int h=m;
        while(l<=h){
            int mid=(l+h)/2;
            int x=func(n,mid,m);

            if(x==1){
                return mid;
            }else if(x==2){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
        }
    };
