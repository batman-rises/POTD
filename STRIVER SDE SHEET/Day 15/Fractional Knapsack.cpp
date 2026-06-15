
class Solution {
public:

    struct Data{
        long long val;
        long long wt;
    };

    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int cap) {

        int n = val.size();

        vector<Data> a(n);

        for(int i = 0; i < n; i++){
            a[i].val = val[i];
            a[i].wt = wt[i];
        }


        //sort according to value per wt (desc)
        auto mycmp = [](Data a, Data b){
            return (double)a.val / a.wt >
                   (double)b.val / b.wt;
        };

        sort(a.begin(), a.end(), mycmp);

        double total = 0.0;

        for(int i = 0; i < n; i++){

            if(a[i].wt <= cap){
                total += a[i].val;
                cap -= a[i].wt;
            }
            else{
                total += ((double)cap / a[i].wt) * a[i].val;
                break;
            }
        }

        return total;
    }
};