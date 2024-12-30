#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 2; i++)
    {
        int minIndex = i;
        for (int j = i; j <= n - 1; j++)
        {

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            };
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };

    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };
}

// Time => O(n2)