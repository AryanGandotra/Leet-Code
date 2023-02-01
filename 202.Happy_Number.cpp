class Solution
{
public:
    vector<int> number;
    int sum = 0;
    bool a = false;
    int split(int *n)
    {
        int remainder = 0;
        while (*n > 0)
        {
            remainder = *n % 10;
            number.insert(number.begin(), remainder * remainder);
            *n = *n / 10;
        }
        for (int i = 0; i < number.size(); i++)
        {
            sum = sum + number[i];
            cout << number[i] << "      ";
        }
        number.clear();
        cout << "sum: " << sum;

        cout << endl;
        if (sum == 1)
        {
            a = true;
        }

        number.insert(number.begin(), sum);
        sum = 0;
        int x = number[0];
        number.clear();
        // cout<<"Printing vector after last clearing___________"<<endl;
        // for (int i = 0; i < number.size(); i++)
        // {
        //     // number.erase(number.begin(), number.begin() + 5);
        //     cout<<number[i]<<" ";
        // }
        // cout<<"______________________________________________"<<endl;
        return x;
    }

    bool isOne()
    {
        if (sum == 1)
        {
            return true;
        }
        return false;
    }

    bool isHappy(int n)
    {
        if (n == 1 || n == 7)
        {
            return true;
        }
        else
        {
            while (!isOne())
            {
                if (a == true)
                {
                    return true;
                }
                n = split(&n);
                        }
        }
        return false;
    }
};