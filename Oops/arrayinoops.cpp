#include <iostream>
using namespace std;
class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void setprice();
    void getprice();
    void ini_counter()
    {
        counter = 0;
    }
};
void shop ::setprice()
{
    cout << "enter the id of item " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "enter the price of item " << counter + 1 << endl;
    cin >> item_price[counter];
    counter++;
}
void shop ::getprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "id of the item " << item_id[i] << " and price is " << item_price[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.ini_counter();
    for (int i = 0; i < 3; i++)
    {
        dukaan.setprice();
    }
    dukaan.getprice();

    return 0;
}