#include <iostream>
#include <vector>
//conditional operator --- (conditional_expression) ? expr1 : expr2
using namespace std;

int main()
{
    int a{10}, b{5}, result{0};
    
    result = (a>b) ? (a-b) : (b-a);
    cout<<result;
    return 0;
}