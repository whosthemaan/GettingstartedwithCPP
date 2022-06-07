#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
//    for(Sales_item item; cin >> item; cout << item << endl);

    Sales_item unit1, unit2, sum;
//    cin >> unit1 >> unit2;    
//    if(unit1.isbn() == unit2.isbn())
//    {
//        cout << unit1 + unit2;
//        return 0;
//    }
//    else {
//        cout <<"Data must have same ISBN"<<endl;
//        return -1;
//    }
      
//    sum = unit1;
//    while(cin>>unit2)
//    {
//        if(unit1.isbn() == unit2.isbn())
//        {
//            sum += unit2;
//            
//        }
//        else
//            break;
//    }

    if (cin >> unit1) {
        int count = 1;
        while(cin >> unit2)
        {
            if(unit1.isbn() == unit2.isbn())
                ++count;
            else
            {
                cout << unit1.isbn() << " occurs " << count << " times" <<endl;
                unit1 = unit2;
                count = 1;
            }
        }
        cout << unit1.isbn() << " occurs " << count << " times" <<endl;
    }

    return 0;
}