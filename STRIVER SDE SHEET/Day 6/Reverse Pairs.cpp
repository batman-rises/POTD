class Solution {
public:
typedef long long ll;
    void merge(vector<int> &a,int l,int mid,int h){
        int i=l,j=mid+1;
       
        vector<int> temp;
        while(i<=mid && j<=h){
            if(a[i] <= a[j]){
                temp.push_back(a[i]);
                i++;
            }else{
                temp.push_back(a[j]);
                j++;
                
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
        
    }
    long long countPairs(vector<int> &a,int l,int mid,int h){
        int cnt=0;
        int r=mid+1;
        for(int i=l;i<=mid;i++){
            while(r<=h && (long long)a[i]>2ll*a[r]){
                r++;
            }
            cnt+=(r-(mid+1));
        }
        return cnt;
    }
    long long mergeSort(vector<int> &a,int l,int h){
        if(l>=h)return 0;
        int mid=(l+h)/2;
        int leftInvCnt=mergeSort(a,l,mid);
        int rightInvCnt=mergeSort(a,mid+1,h);
        int cnt=countPairs(a,l,mid,h);
        merge(a,l,mid,h);
        return (leftInvCnt + rightInvCnt + cnt);
    }
   
    int reversePairs(vector<int>& a) {
        int n=a.size();
        return mergeSort(a,0,n-1);
        
    }
};