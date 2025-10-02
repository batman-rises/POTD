class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int res = 0;
        int empty = 0;

        while (numBottles > 0)
        {
            res += numBottles;                // drink all full bottles
            empty += numBottles;              // now they are empty
            numBottles = empty / numExchange; // exchange empties for full
            empty = empty % numExchange;      // leftovers after exchange
        }

        return res;
    }
};
