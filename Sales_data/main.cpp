#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std; // or mention specific  --------- using std::cin; ------- using std::string; 

// to continuously read data -- string word; while(cin >> word);
//while(getline(cin, line)) cout << line <<endl; -- To read multiple lines of input
//string::size_type len = line.size();

int main()
{
    Sales_data data1, data2;
    
    cin >> data1.bookNo >> data1.units_sold >> data1.price;
    data1.revenue = data1.units_sold * data1.price;
    
    cin >> data2.bookNo >> data2.units_sold >> data2.price;
    data2.revenue = data2.units_sold * data2.price;
    
    if(data1.bookNo ==  data2.bookNo)
    {
        unsigned total_cnt = data1.units_sold + data2.units_sold;
        double total_revenue = data1.revenue + data2.revenue;
        
        cout << data1.bookNo << " " << total_cnt << " " <<total_revenue << " ";
        if(total_cnt!=0)
        {
            cout << total_revenue/total_cnt << endl;
        }
        else{
            cout << "no sales" << endl;
        }
        return 0;
    }
    else
    {
        cerr << " Both must have same ISBN" <<endl;
        return -1;
    }

}