#include <iostream>

using namespace std;

int main()
{
    float totalSale, discount, newPrice;

    // Input.....
    cout << "Enter the total sale of customer: ";   cin >> totalSale;

    if (totalSale < 10000) {
        // no discount
        discount = totalSale * (0 / 100);
        newPrice = totalSale - discount;

        cout << "Your total price < 10000, so we cannot give you any kind of discount." << endl;
        cout << endl << "Your total price = " << newPrice << endl;
    } else {
        // discount

        if (totalSale >= 10000 && totalSale < 20000)
        {
            discount = (10.0f / 100.0f);  // ten percent
        }
        else if (totalSale >= 20000 && totalSale < 30000)
        {
            discount = (15.0f / 100.0f);
        }
        else if (totalSale >= 30000 && totalSale < 40000)
        {
            discount = (20.0f / 100.0f);
        }
        else if (totalSale >= 40000 && totalSale < 50000)
        {
            discount =  (25.0f / 100.0f);
        }
        else
        {
            discount = 0.30f;
        }

        newPrice = totalSale - (totalSale * discount);
        cout << "We have a " << discount * 100 << " % discount for you" << endl;
        cout << "Your total discount is " << totalSale * discount << endl;
        cout << "Your new price = " << newPrice << endl;

    }
    return 0;
}
