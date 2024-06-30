class Solution
{
public:
    int solver(int n, int k, int val)
    {
        if (k >= n)
            return 0;
        if (n % k == 0)
            return 2 + solver(n, k + k, k);
        return 1 + solver(n, k + val, val);
    }
    int minSteps(int n)
    {
        return solver(n, 1, 1);
    }
};