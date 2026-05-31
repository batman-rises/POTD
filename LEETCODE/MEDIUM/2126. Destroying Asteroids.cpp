class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        
        int maxi=*max_element(asteroids.begin(),asteroids.end());
        cout<<maxi;
        for(int a:asteroids){
            if(mass>maxi){
                return true;
            }
            if(a>mass){
                return false;
            }else{
                mass+=a;
            }
        }
        return true;
    }
};