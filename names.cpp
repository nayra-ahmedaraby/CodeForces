#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxNum = arr[0];
    int maxCount = 1;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        bool countedBefore = false;
        for (int k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                countedBefore = true;
                break;
            }
        }
        if (countedBefore)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxNum = arr[i];
        }
    }

    cout << "Most frequent number = " << maxNum << endl;
    cout << "Frequency = " << maxCount << endl;

    return 0;
}
