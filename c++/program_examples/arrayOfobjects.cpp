#include <bits/stdc++.h>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    int p, q, i;
    Shop *arr = new Shop[size];
    Shop *temparr = arr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id and price of the item " << i + 1;
        cin >> p >> q;
        arr->setData(p, q);
        arr->getData();
        arr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "item number" << i + 1 << endl;
        temparr->getData();
        temparr++;
    }

    return (0);
}