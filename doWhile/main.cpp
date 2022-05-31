#include <iostream>
using namespace std;

int main()
{
    int value {};
    do
    {
        cout << "enter an integer or 10 to close the menu" << endl;
        cin >> value;
    } while(value != 10);
        
    return 0;
}