class Solution {
public:
    int binaryGap(int n) {
        vector<int>bin;
        while(n>0){
            bin.push_back(n % 2);
            n=n/2;
        }
        //reverse(bin.begin(),bin.end());
        stack<int>st;
        int d=0;
        int maxi=INT_MIN;
        for(int i=0;i<bin.size();i++)
        st.push(bin[i]);

        for(int i=0;i<bin.size();i++){
            if(st.top()==1){
                maxi=max(maxi,d);
                d=1;
            }
            else{d++;}
            st.pop();
        }
        return maxi;
    }
};