#include <iostream>
using namespace std; //alias declaration as per new standard

int main()
{
//    int num=10;
//    //cout << &num; //using & is to get the address of the variable
//    int *p1 = &num;
//    *p1 = 0x123;
//    *p2 = nullptr; //defining a null pointer. Possible to use "NULL"(inside cstdlib library) as well
//    cout << num;

    // Exercise 2.18
//    int i=10, *p1 = &i;
//    p1 = 1;
//    *p1 = 1;

    // Exercise 2.20
//    int i = 42;
//    int *p1 = &i;
//    *p1 = *p1 * *p1;
//    cout << p1;

/* In this program, we are able to change the value of pi even though pointer pip is constant.  */  
//    int errNumb = 0;
//    int *const curErr = &errNumb;
//    double pi = 3.14159;
//    double *const pip = &pi;  
//    *pip = 5.2;
//    cout << pi;

//    if (*curErr) {
//    errorHandler();
//    *curErr = 0; // ok: reset the value of the object to which curErr is bound
//    }

//    const int i2 = 10;
//    const int *p1 = &i2;
//    cout << *p1;

//    int i=0;
//    const int v2=0; int v1=v2; //v1 is normal int with value 0
//    int *p1 = &v1, &r1 = v1; //p1 is a normal pointer with address of v1, r1 is a normal int reference for v1
//    const int *p2 = &v2, *const p3 = &i, &r2 = v2; //p2 is a low level const for v2, p3 is a high level const for i. r2 is a reference(const - low level) for v2 
//    constexpr int mf=10;
//    p2 = p3;

    /* ---------------- Defining Type aliases ----------------------- */
    //using SI = Sales_item;
//    typedef double wages; //
//    wages hourly, weekly;
//    wages i=10.0;
//    cout << i;
//    typedef wages base, *p;

//    int i=0, &r=i; //r - reference of type int
//    auto a = r; //a - will become int as i is an integer 
//    const int ci = i, &cr = ci; //ci = 0 and cr is a const int ref to ci
//    auto b = ci; //b will become int
//    auto c = cr; //c will become const int
//    auto d = &i; //d will be pointer of type int
//    auto e = &ci; //e will be const int pointer 
//    const auto f = ci; //f will be top level const int
//    auto &g = ci; //g - is a reference of type const int
//    auto &h = 42; //error - cant't refer literal
//    const auto &j = 42; //error - cant refer literal
        
//    a = 42; //a will become 42 from 0
//    b = 42; //will become 42
//    c = 42; //will become 42
//    d = 42; //d is a pointer, cannot store int value
//    e = 42; //e is a pointer, cant store int
//    g = 42; //can't change value - references

/*---------- Exercise 2.35 ------------*/
//    const int i=42;
//    auto j = i; const auto &k = i; auto *p = &i;
//    const auto j2 = i, &k2 = i;
    
/* --------------- decltype ((variable)) - reference type, decltype(variable) - reference only if variable is a ref -*/
//    int a=1, b=2; //a and b are int
//    decltype(a) c = a; // c is an int
//    decltype(a=b) d = a; // d is a reference for a
//    cout << c << " " << &d; // &d to print value of reference
    
    return 0;
}