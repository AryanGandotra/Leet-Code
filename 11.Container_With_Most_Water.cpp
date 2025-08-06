class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0, r = height.size() - 1;

        int currArea = 0;
        int maxArea = 0;

        while (l <= r)
        {
            currArea = min(height[l], height[r]) * (r - l);
            maxArea = max(maxArea, currArea);

            if (height[l] < height[r])
                l++;
            else
                r--;
        }

        return maxArea;
    }
};

// class Solution
// {
// public:
//     int maxArea(vector<int> &height)
//     {
//         int i = 0, j = height.size() - 1;
//         int max_water = 0;

//         while (i < j)
//         {

//             int h = min(height[i], height[j]);
//             int current_water = (j - i) * (min(height[i], height[j]));
//             max_water = max(max_water, current_water);

//             while (height[i] <= h && i < j)
//                 i++;
//             while (height[j] <= h && i < j)
//                 j--;
//         }

//         return max_water;
//     }
// };

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int i=0,j=height.size()-1;
//         int area = 0;

//         while(i<j){
//             int new_area = (j-i) * (min(height[i],height[j]));

//             if(new_area > area){
//                 area=new_area;
//             }

//             if(height[i]<height[j]){
//                 i++;
//             }
//             else{
//                 j--;
//             }

//         }

//         return area;
//     }
// };

// brute force solution

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int area = 0;

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){

//                 int new_area = (j-i) * (min(height[i],height[j]));
//                 if(new_area > area){
//                     area=new_area;
//                 }
//             }
//         }
//         return area;
//     }
// };
