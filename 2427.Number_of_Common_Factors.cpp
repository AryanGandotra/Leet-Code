class Solution
{
public:
    void factor(int a, vector<int> &arr)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                arr.push_back(i);
            }
        }
    }

    int commonFactors(int a, int b)
    {

        vector<int> vector1;
        vector<int> vector2;
        vector<int> result;

        factor(a, vector1);
        factor(b, vector2);

        int length = 0;

        if (vector1.size() < vector2.size())
        {
            length = vector1.size();
        }
        else
        {
            length = vector2.size();
        }

        vector<int> v3(length);
        vector<int>::iterator it, end;
        int common = 0;

        end = set_intersection(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), v3.begin());

        for (it = v3.begin(); it != end; it++)
            common++;
        return common;
    }
};