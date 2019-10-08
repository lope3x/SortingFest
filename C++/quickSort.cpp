#include <iostream>

using namespace std;

int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int j, i = low - 1;
    int temp;

    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int partPos = partition(arr, low, high);

        quickSort(arr, low, partPos - 1);
        quickSort(arr, partPos + 1, high);
    }
}

int main(int argc, char const *argv[])
{
    int n, *arr;
    cin >> n;
    arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n-1);

    cout << "Hello HacktoberFest!" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    cout << endl;


    return 0;
}