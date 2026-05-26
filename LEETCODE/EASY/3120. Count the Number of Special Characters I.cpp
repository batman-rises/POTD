class Solution {
public:
    int numberOfSpecialChars(string word) {
        int hash1[26]={0};
        int hash2[26]={0};
        for(char ch:word){
            if(ch>='a' && ch<='z'){
                hash1[ch-'a']=1;
            }
        }
        int cnt=0;
        for(char ch:word){
            if(ch>='A' && ch<='Z'){
                hash2[ch-'A']=1;
            }
        }
        for(int i=0;i<26;i++){
            if(hash1[i]==1 && hash2[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};