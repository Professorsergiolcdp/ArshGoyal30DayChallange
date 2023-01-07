
/*
    how many 5 factor are there just need to check that
    x = n / 5 + n / 25 + ...............
*/

class Solution {
public:
    int trailingZeroes(int n) {
        int x = 0;
        int a = 5;
        while(a <= n)
        {
            x += n / a;
            a *= 5;
        }
        return x;
    }
};