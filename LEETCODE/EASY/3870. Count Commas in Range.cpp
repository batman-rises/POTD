class Solution {
public:
    int countCommas(int n) {
        if(n<1000)return 0;
        return (n-999)*1;//in this range of numbers ie [1000 - 999,999] every number has just one comma so just count the numbers *1
    }
};