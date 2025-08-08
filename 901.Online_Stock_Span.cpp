class StockSpanner
{
public:
    stack<pair<int, int>> st;
    int day = 0;
    StockSpanner()
    {
        int day = 0;
        st = stack<pair<int, int>>();
    }

    int next(int price)
    {
        while (!st.empty() && st.top().first <= price)
            st.pop();

        int ans = day - (st.empty() ? -1 : st.top().second);
        st.push({price, day});

        day++;
        return ans;
    }
};

// class StockSpanner
// {
// public:
//     vector<int> prices;
//     StockSpanner() {}

//     int getSmallerElement(int x, int price)
//     {
//         int ans = 0;
//         for (int i = x; i >= 0; i--)
//         {
//             if (prices[i] <= price)
//                 ans++;
//             else
//                 break;
//         }

//         return ans;
//     }

//     int next(int price)
//     {
//         prices.push_back(price);
//         return getSmallerElement(prices.size() - 1, price);
//     }
// };

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */