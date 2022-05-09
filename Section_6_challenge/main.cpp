#include <iostream>

const float charge_per_small_room {25};
const double charge_per_large_room {35};
const float sales_tax {6};
const int valid_days {30};

using namespace std;

int main() {
    
    int num_of_small_rooms {0};
    int num_of_large_rooms {0};
    
    cout << "Welcome to Frank's Carpet Cleaning Service\n";
    cout << "Enter the number of small and large rooms you would like to get cleaned: " ;
    cin >> num_of_small_rooms >> num_of_large_rooms;
    cout << "Number of small rooms: " << num_of_small_rooms << "\n";
    cout << "Number of large rooms: " << num_of_large_rooms << "\n";
    cout << "Price per small room: $" << charge_per_small_room << "\n";
    cout << "Price per large room: $" << charge_per_large_room << "\n";
    float cost = num_of_small_rooms*charge_per_small_room + num_of_large_rooms*charge_per_large_room;
    cout << "Cost: $" << cost << "\n";
    float tax = (cost*sales_tax)/100;
    cout << "Tax: $" << tax << "\n";
    cout << "======================================\n";
    cout << "Total Estimate: $" << cost+tax << "\n";
    cout << "This estimate is valid for only " << valid_days << " days" << endl;

    return 0;
}
