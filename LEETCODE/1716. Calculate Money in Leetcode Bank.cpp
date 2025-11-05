class Solution
{
public:
    int totalMoney(int n)
    {
        int x = 1;
        int ans = 0;
        int cnt = 1;
        for (int i = 1; i <= n; i++)
        {

            ans += x;
            x++;
            if (i % 7 == 0)
            {
                cnt += 1;
                x = cnt;
            }
        }
        return ans;
    }
};