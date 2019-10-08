#include <iostream>

using namespace std;

void selectionSort(int *arr, int n){
    int i,j;
    int menor, temp;

    for(i=0;i<n;i++){
        menor=i;
        for(j=i;j<n-1;j++){
            if(arr[j+1]<arr[menor])
                menor=j+1;
        }
        temp = arr[menor];
        arr[menor]=arr[i];
        arr[i]=temp;
    }
}

int main(int argc, char const *argv[]){
    int n, *arr;
    cin >> n;
    arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    cout << "Hello HacktoberFest!" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    cout << endl;

    return 0;
}