#include <iostream>
#include <vector>
#include <array>
#include <cstring>
using namespace std;

int text_size()
{
    return 10;
}

int main()
{
//    const unsigned len = 3;
//    int a1[len] = {1,2,3};
//    int a2[] = {1, 2, 3}; //array of dimension 3
//    int (*Parray)[10] = &arr; //pointer to an array of 10 integers
//    int (&arrRef)[10] = arr; //reference to an array of 10 integers
    
    /* ------------ Exercise 3.27 ---------------*/
//    unsigned buf_size = 1024;
//    int ia[buf_size];
//    int ia[text_size()];

    /* ------------ Exercise 3.31 ---------------*/
//    int ar[10];
//    for(size_t i=0;i<10;i++)
//        ar[i] = i;
//    for(size_t j=0;j<10;++j)
//        cout << ar[j] <<endl;
        
//    int *beg = begin(ia); // pointer to the first element in ia array
    /* ------------ Exercise 3.34 ---------------*/
//    int arr[] = {1,2,3,4};
//    auto p1 = arr[1];
//    auto p2 = arr[3];
//    p1 += p2-p1;
//    cout << p1;
    /* ------------ Exercise 3.35 ---------------*/
//    int arr[] = {1,2,3,4,5};
//    int* start = begin(arr);
//    int* ending = end(arr);
//    while(start != ending)
//    {
//        *start = 0;
//        cout << *start;
//        start++;
//    }

    /* ------------ Exercise 3.36 ---------------*/
//    string val;
//    vector<int> a {1,2,3,4};
//    vector<int> b {1,2,3,4};
//    
//    if(a.size() != b.size())
//    {
//        cout << "Not equal";
//    }
//    else 
//    {
//        for(auto i=0;i<=3;i++)
//        {
//            if(a[i] == b[i])
//            {
//                val = "equal";
//            }
//            else
//            {
//                val = "unequal";
//                break;
//            }
//        }
//        cout << "The given vectors are " << val <<endl;
//    }

    /* ------------ Exercise 3.37 ---------------*/
//    const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
//    const char *cp = ca;
//    while (*cp) {
//        cout << *cp << endl;
//        ++cp;
//    }

    /* ------------ Exercise 3.39 ---------------*/
//    const char ca[] = "A sample string";
//    const char cb[] = "Second sample string";
//    
//    if(strcmp(ca, cb)==0)
//        cout << "They are equal";
//    else if(strcmp(ca,cb) < 0)
//        cout << "cb is greater";
//    else 
//        cout << "ca is greater";
        
    /* ------------ Exercise 3.40 ---------------*/
//    const char a[] = "sample string literal";
//    const char b[] = "second sample string";
//    char c[]="";
//    strcat(c,a);
//    strcat(c,b);

    /* ------------ Exercise 3.41 ---------------*/
//    int arr[] = {1, 2, 3, 4, 5};
//    vector<int> a(begin(arr), end(arr));
    
    /* ------------ Exercise 3.42 ---------------*/
//    vector<int> a {1,2,3,4};
//    int b[4] = {a[0], a[1], a[2], a[3]};
//    cout << b[2];

}
    /* ------------ Exercise 3.28 ---------------*/
//string sa[10];
//int ia[10];
//int main()
//{
//    string s1[10];
//    int in[10];
//    
//    for(size_t i=0;i<=9;i++)
//    {
//        cout << in[i]<<endl;
//    }
//}