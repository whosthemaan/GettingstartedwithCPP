#include <iostream>

using namespace std;

int main()
{
    int number_of_cents {0};
    cout << "Enter the number of cents: ";
    cin >> number_of_cents;
    int dollar {0}, quarter {0}, dime {0}, nickel {0}, penny {0}, remaining {0};
    
    dollar = number_of_cents/100;
    remaining = number_of_cents%100;

    quarter = remaining/25;
    remaining %= 25;

    dime = remaining/10;
    remaining %= 10;

    nickel = remaining/5;
    remaining %= 5;

    penny = remaining;
                
    cout << "Dollar: " << dollar << "\nQuarter: " << quarter << "\nDime: " << dime << "\nNickel: " << nickel << "\nPenn: " <<penny <<endl;
    return 0;
}

//    bool is_humid = false;
//    bool raining = false;
//    int temp = 10;
//    cout << (temp > 9 && is_humid || raining) <<endl;