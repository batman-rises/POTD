class Solution {
public:
    bool isTrionic(vector<int>& a) {
        int n=a.size();
        if(a[0]>=a[1])return false;

        if(a[n-1]<=a[n-2])return false;
        
        int c=0;
        for(int i=0;i<n;i++){
            int left=INT_MIN;
            if(i>0)
            left=a[i-1];
            int right=INT_MIN;
            if(i<n-1)
            right=a[i+1];
            int x=a[i];
            if(left==x || right==x)return false;
            if(left < x && x>right)c++;
        }
        return (c==2)?true:false;
    }
};


//optimal


class Solution {
public:
    bool isTrionic(vector<int>& a) {
        int n = a.size();
        if (n < 4) return false;

        int i = 1;

        //  Strictly increasing
        while (i < n && a[i] > a[i - 1]) {
            i++;
        }
        if (i == 1 || i == n) return false;

        //  Strictly decreasing
        while (i < n && a[i] < a[i - 1]) {
            i++;
        }
        if (i == n) return false;

        //  Strictly increasing again
        while (i < n && a[i] > a[i - 1]) {
            i++;
        }

        return i == n;
    }
};
