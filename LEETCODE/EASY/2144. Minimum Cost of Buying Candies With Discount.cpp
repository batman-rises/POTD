//APPROACH I - NAIVE
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size() == 1){
            return cost[0];
        }
        sort(cost.rbegin(),cost.rend());
        stack<int> st;
        int sum=0;
        
        for(int i=0;i<cost.size();i++){
            if(st.size()==2){
                int t1=0;
                int t2=0;
                if(!st.empty()){
                    t1=st.top();
                    st.pop();
                }
                
                if(!st.empty()){
                    t2=st.top();
                    st.pop();
                }
                sum+=t1+t2;
                continue;
            }
            st.push(cost[i]);
        }
        cout<<sum;

        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }

        return sum;
    }
};

//APPROACH II - BETTER
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size() == 1){
            return cost[0];
        }
        sort(cost.rbegin(),cost.rend());
        // stack<int> st;
        int sum=0;
        int index=0;

        int n=cost.size();
        int i=0;
        for(int i=0;i<n;i++){
                if((i+1)%3==0)continue;

                sum+=cost[i];
                
        }
        cout<<sum;


        return sum;
    }
};