class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();

        int max_left[n];
        int max_right[n];

        int max_l = 0;
        int max_r = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                max_left[i] = 0;
            }
            else
            {
                max_l = max(max_l, height[i - 1]);
                max_left[i] = max_l;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                max_right[i] = 0;
            }
            else
            {
                max_r = max(max_r, height[i + 1]);
                max_right[i] = max_r;
            }
        }
        // cout<<"max left "<<endl;
        // cout<<"[";
        // for(int i=0;i<n;i++){
        //     cout<<max_left[i]<<",";
        // }
        // cout<<"]";

        // cout<<endl<<"max right"<<endl;
        // cout<<"[";
        // for(int i=0;i<n;i++){
        //     cout<<max_right[i]<<",";
        // }
        // cout<<"]";

        int trapped_water = 0;

        for (int i = 0; i < n; i++)
        {
            int current_trapped_water = min(max_left[i], max_right[i]) - height[i];

            if (current_trapped_water > 0)
            {
                trapped_water += current_trapped_water;
            }
        }

        return trapped_water;
    }
};