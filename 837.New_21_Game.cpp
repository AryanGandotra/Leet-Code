class Solution
{
public:
    double new21Game(int n, int k, int maxPts)
    {
        vector<double> prob(n + 1, 0.0);
        prob[0] = 1.0;

        double currProbabSum = k == 0 ? 0 : 1;

        for (int i = 1; i <= n; i++)
        {
            prob[i] = currProbabSum / maxPts;

            if (i < k)
                currProbabSum += prob[i];

            if (i - maxPts >= 0 && i - maxPts < k)
                currProbabSum -= prob[i - maxPts];
        }

        return accumulate(prob.begin() + k, prob.end(), 0.0);
    }
};