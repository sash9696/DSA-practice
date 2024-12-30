#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        { // to avoid last element being compared to the element not present runtime error

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }

            if(didSwap == 0){
                break;
            }
        }
    }
};

//Worst case Time O(n2)
//best case if arra us already sorted
//then didswap is used only one run O(n)

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };

    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };
}

// Time => O(n2)