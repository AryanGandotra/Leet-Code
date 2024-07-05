class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        int low = 0;
        int high = static_cast<long long>(sqrt(c));

        while (low <= high)
        {
            if (low * low == c - high * high)
                return true;

            else if (low * low < c - high * high)
            {
                low += 1;
            }
            else
            {
                high -= 1;
            }
        }

        return false;
    }
};

// class Solution {
// public:
//     bool judgeSquareSum(int c) {
//         if(c==1 || c==0)
//             return true;

//         for (long long i = 0; i * i <= c; ++i) {
//             for (long long j = 0; j * j <= c; ++j) {
//                 if (i * i + j * j == c) {
//                     return true;
//                 }
//                 if (i * i + j * j > c) {
//                     break;
//                 }
//             }
//         }

//         return false;
//     }
// };