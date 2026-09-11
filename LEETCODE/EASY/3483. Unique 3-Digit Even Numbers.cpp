class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> hash(10,0);
        for(int i=0;i<digits.size();i++){
            hash[digits[i]]++;
        }
        int ans=0;
        for(int i=1;i<=9;i++){
            if(hash[i]==0)continue;
            hash[i]--;
            for(int j=0;j<=9;j++){
                if(hash[j]==0)continue;
                hash[j]--;
                for(int k=0;k<=8;k+=2){
                    if(hash[k]==0)continue;
                    hash[k]--;
                    ans++;
                    hash[k]++;
                    
                }
                hash[j]++;
            }
            hash[i]++;
        }
        return ans;
    }
};