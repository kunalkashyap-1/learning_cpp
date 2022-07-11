#include <bits/stdc++.h>
#include <array>//not necessary after the above declaration 

using namespace std;

void updateArray(array<int, 6> &ar, int i, int val)
{
    ar[i] = val;
}

void print(array<int, 6> &ar)
{
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    // Array classical
    int arr[] = {5, 4, 3, 2, 1}; // initialization list
    int n = sizeof(arr) / sizeof(arr[0]);
    // for each loop
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
    // array in stl
    array<int, 6> ar = {1, 3, 2, 5, 4, 6};
    updateArray(ar, 0, 10);
    print(ar);
    sort(ar.begin(), ar.end());
    print(ar);
    array<int, 10> arrr;
    arrr.fill(5);
    for (int a : arrr)
    {
        cout << a << " ";
    }
    cout << endl;
    //arr.front()=> array element at the front
    //arr.back() => array element at the back 
    return (0);
}