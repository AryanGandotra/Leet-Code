#include <iostream>

using namespace std;

bool helper(vector<int> arr, vector<vector<int>> &result, vector<int> &temp, int currIndex, int currSum, int sum)
{
    if (currIndex == arr.size())
    {
        if (currSum == sum)
        {
            result.push_back(temp);
            return true;
        }
        return false;
    }

    temp.push_back(arr[currIndex]);
    if (helper(arr, result, temp, currIndex + 1, currSum + arr[currIndex], sum) == true)
        return true;

    temp.pop_back();
    if (helper(arr, result, temp, currIndex + 1, currSum, sum))
        return true;
        
    return false;
}

vector<vector<int>> getSubsequencesWithSumK(vector<int> arr, int sum)
{

    vector<vector<int>> result;
    vector<int> temp;
    int currIndex = 0;
    helper(arr, result, temp, currIndex, 0, sum);
    return result;
}

void print(vector<vector<int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            if (j == ans[i].size() - 1)
            {
                cout << ans[i][j];
            }
            else
            {
                cout << ans[i][j] << ",";
            }
        }
        cout << "]" << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int sum = 2;
    vector<vector<int>> ans = getSubsequencesWithSumK(arr, sum);
    print(ans);
    return 0;
}