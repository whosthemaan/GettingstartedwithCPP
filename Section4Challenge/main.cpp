#include <iostream>

const float charge_per_room = 30;
const float sales_tax = 6;

using namespace std;

int main() {
    
    int num_of_rooms;
    cout << "Enter the number of rooms you would like to get cleaned: " ;
    cin >> num_of_rooms;
    cout << "Number of rooms: " << num_of_rooms << "\n";
    cout << "Price per room: $" << charge_per_room << "\n";
    float cost = num_of_rooms*charge_per_room;
    cout << "Cost: $" << cost << "\n";
    float tax = (cost*sales_tax)/100;
    cout << "Tax: $" << tax << "\n";
    cout << "======================================\n";
    cout << "Total Estimate: $" << cost+tax << "\n";
    cout << "This estimate is valid for only 30 days" << endl;

    return 0;
}