class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        int l = 0, r = n;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (pow(4, mid) == n)
                return true;
            else if (pow(4, mid) > n)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};

// class Solution
// {
// public:
//     bool isPowerOfFour(int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (pow(4, i) > n)
//             {
//                 break;
//             }
//             if (pow(4, i) == n)
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };