#include <iostream>
#include <string>
using namespace std;

#ifndef SALES_DATA_H
#define SALES_DATA_H

struct Sales_data{
    string bookNo;
    unsigned units_sold = 0;
    double price = 0;
    double revenue = 0.0;
};

#endif