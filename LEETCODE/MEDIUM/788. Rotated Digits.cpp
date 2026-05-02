//APPROACH 1 - BRUTE
class Solution {
public:
    vector<int> extractDigits(int n){
        vector<int> ans;
        while(n!=0){
            ans.push_back(n%10);
            n=n/10;
        }
        return ans;
    }
    int rotatedDigits(int n) {
        // unordered_map<int,int> mp={
        //     {2,5},
        //     {5,2},
        //     {6,9},
        //     {9,6}
        // };

        if(n<=1)return 0;

        int cnt=0;
        for(int i=1;i<=n;i++){
            vector<int> temp=extractDigits(i);
            int flag=0;
            int invaid=0;
            for(int x:temp){
                if(x==3 || x==7 || x==4 ){
                    invaid =1;
                    break;
                }
                
                else if(x==2 || x==5 || x==6 || x==9)
                    flag=1;
            }

            if(flag==1 && invaid!=1)
                cnt++;
            }
        return cnt;
        
    }
};


//APPROACH 2 - PROBABLY BETTER

class Solution {
public:
    
    int rotatedDigits(int n) {
        

        if(n<=1)return 0;

        int cnt=0;
        for(int i=1;i<=n;i++){
            // vector<int> temp=extractDigits(i);
            int num=i;
            int flag=0;
            int invaid=0;
            while(num != 0){
                int x=num%10;
                if(x==3 || x==7 || x==4 ){
                    invaid =1;
                    break;
                }
                
                else if(x==2 || x==5 || x==6 || x==9)
                    flag=1;
                
                num=num/10;
            }

            if(flag==1 && invaid!=1)
                cnt++;
            }
        return cnt;
        
    }
};