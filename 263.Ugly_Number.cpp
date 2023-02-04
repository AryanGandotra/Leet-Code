class Solution
{
public:
    vector<int> pf;
    void printPrimeFactors(int n)
    {
        while (n % 2 == 0)
        {
            //   cout<<"2\t";
            pf.push_back(2);
            n = n / 2;
        }
        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            while (n % i == 0)
            {
                pf.push_back(i);
                n = n / i;
            }
        }
        if (n > 2)
            pf.push_back(n);
    }
    bool isUgly(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        if (n == 1)
        {
            return true;
        }

        printPrimeFactors(n);

        for (int i = 0; i < pf.size(); i++)
        {
            cout << pf[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < pf.size(); i++)
        {
            if (!(pf[i] == 2 || pf[i] == 3 || pf[i] == 5))
            {
                return false;
            }
        }

        return true;
    }
};