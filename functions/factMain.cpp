#include <iostream>
#include "Chapter6.h"
#include <cctype>
#include <vector>

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

/* ---------- Exercise 6.17 --------------- */
bool capital_or_not(string &s)
{
    bool is_up = false;
    for(char c:s)
    {
        if(isupper(c))
        {
            is_up = true;
            break;
        }
    }
    return is_up;
}

string all_to_lower(string &z)
{
    string a;
    for(auto c:z)
    {
        a.push_back((char) tolower(c));
    }
    return a;
}

/* ---------- Exercise 6.18 --------------- */
//bool compare(&matrix, &matrix)
//{
//    bool val;
//    return val;
//}
//
//vector<int>::iterator change_val(int a, vector<int>::iterator b)
//{
//    vector<int>::iterator c;
//    return c;
//}

double calc(double a)
{
    return a;
}

int count(const string &a, char b);
int sum(vector<int>::iterator, vector<int>::iterator, int a);
vector<int> vec(10);

//void print(int (&arr)[10]) arr is a reference to an array of ten ints
//{
//    for (auto elem : arr)
//    cout << elem << endl;
//}

/* ---------- Exercise 6.21 --------------- */
int greater_function(int a, int *b)
{
    if(a>*b)
    {
        return a;
    }
    return *b;
}
    
/* ---------- Exercise 6.22 --------------- */
void swapping_here(int *a, int *b)
{
    int *c;
    c = a;
    a = b;
    b = c;
    cout << *a<<endl;
    cout << *b<<endl;
}

int main()
{
///* ---------- Exercise 6.10 --------------------- */
//    int a = 100;
//    int b = 200;
//    swapping(&a,&b);
//    cout << a << endl;
//    cout << b << endl;
//    cout << factorial(3)<<endl;
///* ------------finding first char --------------- */
//    string::size_type x;
//    cout << find_char("rohaan", 'a', x)<<endl;
//    cout << x <<endl;
///* ----------------Exercise 6.11------------------*/
//    int a = 100;
//    reset(a);
//    cout << a;
///* ----------------Exercise 6.12------------------*/
//    int a = 100;
//    int b = 200;
//    swapping(a,b);
//    cout << a << endl;
//    cout << b << endl;

///* ----------------Exercise 6.17------------------*/
//    string s = "Hey its me";
//    cout << all_to_lower(s);

//    count("abcda", 'a');
//    cout << calc(6.6);
//    cout << factorial(3)<<endl;

///* ---------- Exercise 6.21 --------------- */
//    int a = 20, b = 11;
//    cout << greater_function(a, &b);

///* ---------- Exercise 6.22 --------------- */
//int a = 10, b = 20;
//swapping_here(&a, &b);

}

