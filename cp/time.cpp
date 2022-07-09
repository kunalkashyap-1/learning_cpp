#include <bits/stdc++.h>
using namespace std;
#define MAX 20

void Display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int mid, int low, int high)
{
    int i, j, k, B[MAX];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

int main()
{
    auto start_time = clock();
    int arr[] = {89, 1, 46, 14, 2, 15, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // size of array
    Display(arr, n);
    mergeSort(arr, 0, 6);
    Display(arr, n);
    auto end_time = clock();
    cout << end_time - start_time << "ms" << endl;
    return (0);
}