#include <bits/stdc++.h>
#include <vector>
using namespace std;

void display(vector<int> &vec)
{
    for (int x : vec)
    {
        cout << x<<" ";
    }
    cout << endl;
}
int main()
{
    // empty container constructor
    vector<int> vec;
    // fill constructor (4 intergers with values 20)
    vector<int> withFull(4, 20);
    // range constructor
    int num[] = {33, 45, 65, 77};
    vector<int> range(num, num + 4);
    // copy constructor
    vector<int> copy(range);
    // vector with initialization list
    vector<int> init = {34, 54, 67, 54};
    init.push_back(20);
    // vec.reserve(100);
    int n, data;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "data" << endl;
        cin >> data;
        vec.push_back(data);
        cout << "capacity " << vec.capacity() << endl
             << "size " << vec.size() << endl;
    }
    display(vec);
    sort(vec.begin(), vec.end());
    display(vec);
    return (0);
}