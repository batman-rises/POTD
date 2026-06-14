class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int i=0;
        int j=0;
        int n=a.size();
        while(i < n){
            if(i>0 && a[i] == a[i-1]){
                i++;
                continue;
            }
            a[j++]=a[i++];
            
        }
        return j;
    }
};