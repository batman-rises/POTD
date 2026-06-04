class Solution {
public:
    int check(int n){
        vector<int> temp;
        while(n!=0){
            temp.push_back(n%10);
            n=n/10;
        }

        int ans=0;
        for(int i=1;i<temp.size()-1;i++){
            if((temp[i-1]<temp[i] && temp[i+1]<temp[i])||
            (temp[i-1]>temp[i] && temp[i+1]>temp[i]))
                ans++;
        }
        return ans;
    }
    int totalWaviness(int a, int b) {
        if(a<100 && b<100)return 0;

        int l=a;
        int h=b;
        int ans=0;
        while(l<=h){
            ans+=check(l);
            l++;
        }
        return ans;
    }
};