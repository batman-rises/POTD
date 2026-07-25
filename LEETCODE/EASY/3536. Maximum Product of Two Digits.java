// class Solution {
// public:
//     int maxProduct(int n) {
//         string s;
//         while(n!=0){
//             int a=n%10;
//             s.push_back(a);
//             n=n/10;
//         }
//         sort(s.begin(),s.end());
//         int x=s[s.size()-1];
//         int y=s[s.size()-2];
//         //return stoi(x)*stoi(y);
//         return x*y;
//     }
// };

import java.util.ArrayList;
import  java.util.Collections;

class Solution {
    public int maxProduct(int n) {
        ArrayList<Integer> s=new ArrayList<>();
        while(n!=0){
            int a=n%10;
            s.add(a);
            n=n/10;
        }
        Collections.sort(s);
        int x=s.get(s.size()-1);
        int y=s.get(s.size()-2);
        return x*y;
    }
}