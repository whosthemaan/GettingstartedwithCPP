#include <iostream>
#include <vector>
#include <array>
#include <cstring>

using namespace std;

int main()
{
//    int ia[2][3];
//    for (const auto &row : ia)
//        for (auto col : row)
//            cout << col << endl;
            
    /* ---------------- Exercise 3.43 ---------------- */
    int ia[3][4];
    using int_array = int[4]; 
    typedef int int_array[4];

//    for (int_array *p = ia; p != ia + 3; ++p)  //using pointer
//    {
//        for (int *q = *p; q != *p + 4; ++q)
//            cout << *q << " ";
//        cout << endl;
//    }

     /* ---------------- Exercise 3.45 ---------------- */   
//    for(auto &i : ia) //using nested range for
//      {  for(auto x : i)
//            cout << x << " ";
//        cout << endl;
//      }
}