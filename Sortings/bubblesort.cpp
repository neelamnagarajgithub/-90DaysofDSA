#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    int temp1, didswap;
    for (int i = 0; i < n; i++)
    {
        didswap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp1 = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp1;
                didswap = 1;
            }
        }
        if (didswap == 0)
            break;
        cout<<"still running";
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    bubble_sort(arr, 6);
}