class Solution {
public:
    int func(int n){
        int s=0;
        while(n!=0){
            int a=n%10;
            s+=a;
            n=n/10;
        }
        return s;
    }
    int smallestIndex(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++){
            int x;
            if(a[i]<10){
                x=a[i];
            }else{
                x=func(a[i]);
            }
            if(x==i)return i;
        }
        return -1;
    }
};