class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxi=0;
        for(int i:gain){
            sum+=i;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};