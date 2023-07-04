class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        // O(N) Time Complexity , O(1) Space complexity
        int n = arr.size();
        int maxSoFar = arr[n - 1];
        arr[n - 1] = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            int temp = maxSoFar;
            if (maxSoFar < arr[i])
                maxSoFar = arr[i];
            arr[i] = temp;
        }
        return arr;
    }
};

// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
// O(N) Time Complexity , O(N) Space complexity
//         int max_number = -1;
//         vector<int> result(arr.size(),0);

//         for(int i=arr.size()-1;i>=0;i--){
//             result[i] = max_number;

//             if(arr[i]>max_number)
//                 max_number = arr[i];
//         }

//         return result;
//     }
// };