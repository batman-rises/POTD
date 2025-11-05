class Solution
{
public:
    vector<int> temp(vector<int> a, int cur, bool dir)
    {
        // Simulate the movement process
        while (cur >= 0 && cur < a.size())
        {
            if (a[cur] == 0)
            {
                // Move in the same direction
                cur += (dir ? 1 : -1);
            }
            else
            {
                // Decrement, reverse direction, move one step
                a[cur]--;
                dir = !dir;
                cur += (dir ? 1 : -1);
            }
        }
        return a;
    }

    bool areAllZeros(vector<int> &arr)
    {
        for (int x : arr)
            if (x != 0)
                return false;
        return true;
    }

    int countValidSelections(vector<int> &a)
    {
        int n = a.size();
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                // Try both directions
                vector<int> rightSim = temp(a, i, true);
                if (areAllZeros(rightSim))
                    c++;

                vector<int> leftSim = temp(a, i, false);
                if (areAllZeros(leftSim))
                    c++;
            }
        }
        return c;
    }
};
