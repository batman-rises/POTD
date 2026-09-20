/*
Given a string s, calculate its reverse degree.

The reverse degree is calculated as follows:

For each character, multiply its position in the reversed alphabet ('a' = 26, 'b' = 25, ..., 'z' = 1) with its position in the string (1-indexed).
Sum these products for all characters in the string.
Return the reverse degree of s.
*/
class Solution {
public:
    int reverseDegree(string s) {
        
        int pos=1;
        int ans=0;
        for(char ch:s){
            int rev_pos=(26-(ch-'a'));
            ans+=(pos*rev_pos);
            pos++;
        }
        return ans;
    }
};