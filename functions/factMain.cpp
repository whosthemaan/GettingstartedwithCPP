#include <iostream>
#include "Chapter6.h"

using namespace std;

/* ---------- Exercise 6.10 --------------- */
void swapping(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// finding first char
auto find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0; i != s.size(); i++)
    {
        if(s[i] == c) {
            if(ret == s.size())
                ret = i; //first occurence of c
            ++occurs;
        }
    }
    return ret;
}

/* ---------- Exercise 6.11 --------------- */
void reset(int &x)
{
    x = 0;
}

/* ---------- Exercise 6.12 --------------- */
void swapping(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
/* ---------- Exercise 6.10 --------------------- */
//    int a = 100;
//    int b = 200;
//    swapping(&a,&b);
//    cout << a << endl;
//    cout << b << endl;
//    cout << factorial(3)<<endl;
/* ------------finding first char --------------- */
//    string::size_type x;
//    cout << find_char("rohaan", 'a', x)<<endl;
//    cout << x <<endl;
/* ----------------Exercise 6.11------------------*/
//    int a = 100;
//    reset(a);
//    cout << a;
/* ----------------Exercise 6.12------------------*/
    int a = 100;
    int b = 200;
    swapping(a,b);
    cout << a << endl;
    cout << b << endl;
//    cout << factorial(3)<<endl;
}
