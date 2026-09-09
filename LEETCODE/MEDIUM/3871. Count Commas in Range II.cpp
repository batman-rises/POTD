class Solution {
public:
    // LOGIC:
// Har 3 digits ke baad comma add hota hai, isliye numbers ko
// powers of 1000 ke groups me divide kar sakte hain.
//
// 1,000       - 999,999          -> 1 comma
// 1,000,000   - 999,999,999      -> 2 commas
// 1,000,000,000 - 999,999,999,999 -> 3 commas
//
// Har group ke liye:
// numbers in range * commas per number
// ko answer me add kar do.
    typedef long long ll;
    long long countCommas(long long n) {
        ll total=0;
        ll start=1000;
        int cnt=1;

        while(start <=  n){
            ll end=min(n,start*1000-1);
            ll numbers=end-start+1;
            total+=(numbers*cnt);
            cnt++;
            start*=1000;
        }
        return total;
    }
};