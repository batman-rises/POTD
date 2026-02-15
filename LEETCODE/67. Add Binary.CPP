class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int carry=0;
        while(i<n || j<m){
            int x = (i < n) ? a[i] - '0' : 0;
            int y = (j < m) ? b[j] - '0' : 0;

            int sum=x+y+carry;
            res.push_back((sum % 2) + '0');
            carry = sum / 2;

            i++;
            j++;
        }
        if(carry)res.push_back(carry+'0');

        reverse(res.begin(),res.end());
        return res;
    }
};