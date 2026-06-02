class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int maxiProfit=0;
        int price=a[0];
        for(int i=1;i<n;i++){
            int profitPerTransaction=a[i]-price;
            maxiProfit=max(maxiProfit,profitPerTransaction);
            price=min(price,a[i]);
        }
        return maxiProfit;
    }
};