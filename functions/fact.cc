#include "Chapter6.h"

int factorial(int num)
{
    int val {1};
    while(num>1)
    {
        val *= num;
        num--;
    }
    return val;
}