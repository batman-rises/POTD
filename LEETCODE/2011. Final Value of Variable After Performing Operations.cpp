class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int res = 0;
        for (string w : operations)
        {
            if (w == "++X" || w == "X++")
                res += 1;
            else
                res -= 1;
        }
        return res;
    }
};