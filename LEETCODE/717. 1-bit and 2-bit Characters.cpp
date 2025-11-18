class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        int i = 0, n = bits.size();
        while (i < n - 1)
        {
            if (bits[i] == 1)
                i += 2;
            else
                i++;
        }
        return i == n - 1;
    }
};

// 🧩 How decoding works

// You must read the array from left to right:

// If bit is 0 → it's a one-bit char → move 1 step ahead

// If bit is 1 → it's a two-bit char → move 2 steps ahead (skip next bit)

// 💡 Simple rule

// You keep jumping:

// 0 → jump 1

// 1 → jump 2

// If you land on the last index → last is one-bit (0) → return true
// If you jump over the last index → last was part of a two-bit char → return false