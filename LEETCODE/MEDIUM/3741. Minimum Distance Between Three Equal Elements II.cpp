class Solution {
public:
    int minimumDistance(vector<int>& a) {
        unordered_map<int,vector<int>> mp;
        int mini=1e9;
        for(int i=0;i<a.size();i++){
            mp[a[i]].push_back(i);
            if(mp[a[i]].size()>=3){
                vector<int> &temp=mp[a[i]];
                int size=temp.size();
                int i=temp[size-3];
                int k=temp[size-1];
                mini=min(mini,2*(k-i));
            }
        }
        return mini!=1e9? mini:-1;
    }
};