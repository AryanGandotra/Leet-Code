class Solution
{
public:
    double average(vector<int> &salary)
    {
        double max = INT_MIN;
        double min = INT_MAX;
        double sum = 0;
        double size = salary.size() - 2;

        for (int i = 0; i < salary.size(); i++)
        {
            if (salary[i] < min)
            {
                min = salary[i];
            }
            if (salary[i] > max)
            {
                max = salary[i];
            }

            sum += salary[i];
        }

        cout << "max is: " << max << endl;
        cout << "min is: " << min << endl;
        cout << "sum is: " << sum << endl;
        return (sum - max - min) / size;
    }
};