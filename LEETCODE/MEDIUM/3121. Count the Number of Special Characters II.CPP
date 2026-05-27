class Solution {
public:
    int numberOfSpecialChars(string word) {
       int hash1[26];
        fill(hash1, hash1+26, -1);
        int hash2[26];
        fill(hash2, hash2+26, -1);
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(ch>='a' && ch<='z'){
                //if(hash1[ch-'a']==0)
                    hash1[ch-'a']=i;
            }
        }

        int cnt=0;

         for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(ch>='A' && ch<='Z'){
                if(hash2[ch-'A']==-1)
                    hash2[ch-'A']=i;
            }
        }

        for(int i=0;i<26;i++){
            if(hash1[i]!=-1 && hash2[i]!=-1 && hash1[i]<hash2[i]){
                cnt++;
            }
        }

        return cnt;
    }
};