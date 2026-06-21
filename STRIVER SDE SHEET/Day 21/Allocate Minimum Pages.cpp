class Solution {
  public:
    int func(vector<int> &a, int n,int maxi){
        int stud=1;
        int pagesPerStudent=0;
        for(int i=0;i<n;i++){
            if(pagesPerStudent + a[i] <=maxi){
                pagesPerStudent+=a[i];
            }else{
                stud++;
                pagesPerStudent=a[i];
            }
        }
        return stud;
    }
    int findPages(vector<int> &a, int k) {
        // code here
        int n=a.size();
        if(n<k)return -1;
        int low=*max_element(a.begin(),a.end());
        int high=accumulate(a.begin(),a.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int noOfStudents=func(a,n,mid);
            if(noOfStudents <= k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};