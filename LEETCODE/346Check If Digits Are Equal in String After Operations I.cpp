class Solution
{
public:
    bool hasSameDigits(string s)
    {
        // Repeat until only two digits remain
        while (s.size() > 2)
        {
            string temp = "";

            // For each consecutive pair of digits
            for (int j = 1; j < s.size(); j++)
            {
                int d1 = s[j - 1] - '0';   // convert char to int
                int d2 = s[j] - '0';       // convert char to int
                int sum = (d1 + d2) % 10;  // sum mod 10
                temp.push_back(sum + '0'); // convert back to char
            }

            s = temp; // update string for next iteration
        }

        // When only two digits are left
        return s[0] == s[1];
    }
};