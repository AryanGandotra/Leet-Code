class Solution
{
public:
    void merge(vector<int> &array, int left, int mid, int right)
    {
        int const subArrayOne = mid - left + 1;
        int const subArrayTwo = right - mid;

        auto *leftArray = new int[subArrayOne],
             *rightArray = new int[subArrayTwo];

        for (auto i = 0; i < subArrayOne; i++)
            leftArray[i] = array[left + i];
        for (auto j = 0; j < subArrayTwo; j++)
            rightArray[j] = array[mid + 1 + j];

        auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
        int indexOfMergedArray = left;

        while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
        {
            if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
            {
                array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
                indexOfSubArrayOne++;
            }
            else
            {
                array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
                indexOfSubArrayTwo++;
            }
            indexOfMergedArray++;
        }

        while (indexOfSubArrayOne < subArrayOne)
        {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
            indexOfMergedArray++;
        }

        while (indexOfSubArrayTwo < subArrayTwo)
        {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
            indexOfMergedArray++;
        }
        delete[] leftArray;
        delete[] rightArray;
    }

    void mergerSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergerSort(arr, low, mid);
        mergerSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    vector<int> sortArray(vector<int> &nums)
    {
        mergerSort(nums, 0, nums.size() - 1);
        return nums;
    }
};