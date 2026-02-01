class Solution {
public:
    int minimumCost(vector<int>& a) {
        int n=a.size();
        int s=a[0];
        sort(a.begin()+1,a.end());
        return s+a[1]+a[2];
    }
};

// The problem has a strict rule: You must divide the array into 3 contiguous subarrays.

// The first subarray must start at the original a[0].

// The second and third subarrays can start anywhere else.