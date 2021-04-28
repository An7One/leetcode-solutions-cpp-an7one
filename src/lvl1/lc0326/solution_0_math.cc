// https://leetcode.com/problems/power-of-three/
//
// Time Complexity:     O(`n`)
// Space Complexity:    O(1)
//
// Reference:
//  https://leetcode.com/problems/power-of-three/discuss/77876/**-A-summary-of-all-solutions-(new-method-included-at-15:30pm-Jan-8th)/82291
//  https://leetcode.com/problems/power-of-three/discuss/77876/**-A-summary-of-all-solutions-(new-method-included-at-15%3A30pm-Jan-8th)
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n > 1)
        {
            while (n % 3 == 0)
            {
                n /= 3;
            }
        }

        return n == 1;
    }
};