class Solution {
public:
    int countBinarySubstrings(string a) {
        int n=a.size();
        int res=0;
        int prev=0,cur=1;
        for(int i=1;i<n;i++){
           if(a[i]==a[i-1]){
            cur++;
           }else{
            res+=min(prev,cur);
            prev=cur;
            cur=1;
           }
        }
        return res+min(prev,cur);;
    }
};