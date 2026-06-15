class Solution{
    public:
    typedef struct {
        int start;
        int end;
    }Data;
    int maxMeetings(vector<int>& start, vector<int>& end){
        //your code goes here
        int n=start.size();
        Data arr[n];
        for(int i=0;i<n;i++){
            arr[i].start=start[i];
            arr[i].end=end[i];
        }
        auto myCmp=[](Data a, Data b){
            return a.end < b.end;
        };
        sort(arr, arr + n, myCmp);
        int freeTime=arr[0].end;
        int cnt=1;

        for(int i=1;i<n;i++){
            if(arr[i].start > freeTime){
                cnt++;
                freeTime=arr[i].end;
            }
        }
        return cnt;
    }
};