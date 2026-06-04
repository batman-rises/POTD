class Solution {
public:
    long long merge(vector<int> &a,int l,int mid,int h){
        int i=l,j=mid+1;
        long long invCnt=0;
        vector<int> temp;
        while(i<=mid && j<=h){
            if(a[i] <= a[j]){
                temp.push_back(a[i]);
                i++;
            }else{
                temp.push_back(a[j]);
                j++;
                invCnt+=(mid-i+1);
            }
        }
        while(i<=mid){
            temp.push_back(a[i]);
            i++;
        }
        while(j<=h){
            temp.push_back(a[j]);
            j++;
        }
        for(int i=0;i<temp.size();i++){
            a[i+l]=temp[i];
        }
        return invCnt;
    }
    long long mergeSort(vector<int> &a,int l,int h){
        if(l>=h)return 0;
        int mid=(l+h)/2;
        int leftInvCnt=mergeSort(a,l,mid);
        int rightInvCnt=mergeSort(a,mid+1,h);
        int invCnt=merge(a,l,mid,h);
        return (leftInvCnt + rightInvCnt + invCnt);
    }
   long long int numberOfInversions(vector<int> a) {
        int n=a.size();
        return mergeSort(a,0,n-1);
    }
};