#include <iostream>

using namespace std;

class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setprice();
    void displayprice();
};

void shop::setprice()
{
    cout << "enter id of your item no " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "enter price of your item";
    cin >> item_price[counter];
    counter++;
}

void shop::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << item_id[i] << " is " << item_price[i];
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return (0);
}