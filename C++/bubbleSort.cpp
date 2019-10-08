#include <iostream>

using namespace std;

void printArray(int *arr, int n)
{
}

void bubbleSort(int arr[], int n)
{
    int i;
    bool change = true;
    int temp;

    while (change)
    {
        change = false;
        for (i = 0; i < n-1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                change = true;
            }
        }
    }
}

int main()
{
    int n, *arr;
    cin >> n;
    arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);

    cout << "Hello HacktoberFest!" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    cout << endl;

    return 0;
}