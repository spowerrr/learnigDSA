#include <iostream>
#include <cstdint>
using namespace std;

#define faster ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define nl '\n'
#define CRACKED return 0;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    faster;

    int n;
    cout << "Enter array length \nthen elements" << nl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);

    int maxlen = 1;
    int firstindex = 0;

    for (int i = 1; i < n; i++)
    {
        int len = 1;

        if (arr[i] == arr[i - 1] + 1)
        {
            len++;

            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == arr[j - 1] + 1)
                {
                    len++;
                }
                else
                {
                    break;
                }
            }
        }

        if (maxlen < len)
        {
            maxlen = len;
            firstindex = i - len + 1;
        }
    }

    cout << "max len " << maxlen << nl;
    for (int i = firstindex; i < firstindex + maxlen; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    CRACKED;
}
