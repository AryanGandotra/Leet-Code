class Solution
{
public:
    long long getHoursToEatAll(vector<int> &piles, int bananasPerHour)
    {
        long long totalHours = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            int hoursToEatPile = ceil(piles[i] / (double)bananasPerHour);
            totalHours += hoursToEatPile;
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int max = INT_MIN;

        for (int i = 0; i < piles.size(); i++)
        {
            if (max <= piles[i])
                max = piles[i];
        }

        int start = 1;
        int end = max;
        int mid;

        int ans = -1;

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            long long hoursToEatAll = getHoursToEatAll(piles, mid);

            if (hoursToEatAll <= h)
            {
                ans = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return ans;
    }
};

// brute force solution

// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int hours_needed;
//         int ans = 0;
//         int max = INT_MIN;

//         for(int i=0;i<piles.size();i++){
//             if(max<piles[i])
//                 max = piles[i];
//         }
//         for(int k=1;k <= max;k++){
//             hours_needed = 0;
//             for(int i=0;i<piles.size();i++){
//                 if(piles[i]% k == 0)
//                     hours_needed += piles[i]/k;
//                 else{
//                     hours_needed += ((piles[i]/k)+1);
//                 }
//             }

//             // cout<<"speed: "<<k<<"  time needed: "<< hours_needed<<endl;

//             if(hours_needed <= h){
//                 ans = k;
//                 break;
//             }
//         }

//         return ans;
//     }
// };
