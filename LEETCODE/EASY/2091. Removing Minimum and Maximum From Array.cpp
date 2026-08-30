class Solution {
public:
    int minimumDeletions(vector<int>& a) {
        int n=a.size();
        if(n==1)return 1;
        int min_ind=0;
        int max_ind=0;

        for(int i=0;i<n;i++){
            if(a[i] > a[max_ind]){
                max_ind=i;
            }
            if(a[i] < a[min_ind]){
                min_ind=i;
            }
        }

        int left=min(min_ind,max_ind);
        int right=max(min_ind,max_ind);

        return min({left+1+n-right , n-left, right+1});


    }
};