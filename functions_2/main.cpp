#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* ----------- Exercise 6.25 --------------*/
//int main(int argc, char **argv)
//{
//    cout << (string) argv[1] +  (string) argv[2];
//    return 0;
//}

/* ----------- Exercise 6.27 --------------*/
initializer_list<int> a {10,22,33,44,50};
int summation(initializer_list<int> b)
{
    int sum {};
    for(auto i = b.begin(); i != b.end(); ++i)
    {   
        sum += *i;
    } 
    return sum;
}

int factorial(int val)
{
    if(val > 1)
        return factorial(val - 1) * val;
    return 1;
}

/* ----------- Exercise 6.32 --------------*/
//int &get(int *arry, int index) { return arry[index]; }
//
//int main() 
//{
//    int ia[10];
//    for (int i = 0; i != 10; ++i)
//        get(ia, i) = i;
//    cout << ia[9];
//}

/* ----------- Exercise 6.33 --------------*/
void printing(const vector<int> &arry, vector<int>::const_iterator it)
{
    if(it==arry.end())
        return;
    cout << *it++ <<endl;
    printing(arry, it);
}

int main()
{
//    cout <<summation(a);
//    cout << factorial(3);
    vector<int> v  {1,2,3,4,5};
    printing(v, v.begin());
}


