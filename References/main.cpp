#include <iostream>
using namespace std;

int main()
{
    int i=0, &r1 = i; 
//    double a = 5.1, &r2 = a;
//    a = r1;
    i = 5; r1 = 10;
    cout << i << " " << r1;
    return 0;
}