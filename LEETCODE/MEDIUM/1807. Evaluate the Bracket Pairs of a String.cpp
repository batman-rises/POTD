class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(auto it:knowledge){
            mp[it[0]]=it[1];
        }

        string ans="";

        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='('){
                i++;
                string x="";
                while(s[i]!=')'){
                    x+=s[i];
                    i++;
                }
                if(mp.find(x) != mp.end()){
                    ans+=mp[x];
                }else{
                    ans+='?';
                }
            }else{
                ans+=ch;
            }
        }
        return ans;
    }
};