// https://leetcode.com/problems/power-of-three/
// https://leetcode.com/submissions/detail/781987160/
// leetcode
// power of three

class Solution
{
public:
    bool isPowerOfThree(int n)
    {

        int y = 0;

        while (n > 1)
        {
            if (n == 3)
            {
                break;
            }
            else if (n % 3 != 0)
            {
                y = 1;
                break;
            }
            else
            {
                n = n / 3;
            }
        }

        if (n == 0 || y == 1 || n < 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

// better method

bool isPowerOfThree(int n)
{
    if (n < 1)
        return false;
    while (n % 3 == 0)
    {
        n /= 3;
    }
    return n == 1;
}