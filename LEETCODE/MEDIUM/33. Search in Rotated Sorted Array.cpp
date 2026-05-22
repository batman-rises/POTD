class Solution {
public:
    int search(vector<int>& a, int target) {
        int l=0;
        int r=a.size()-1;
        while(l<=r){
            int mid=(l+r)/2;

            if(a[mid]==target){
                return mid;
            }
            else if(a[l]<=a[mid]){
                if(a[l]<=target && a[mid]>target){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }else{
                if(a[mid]<target && target<=a[r]){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};