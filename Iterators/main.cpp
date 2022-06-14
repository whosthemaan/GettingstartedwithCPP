#include <iostream>
#include <vector>
using namespace std;

//vector<int>::iterator it1;
//string::iterator it2;
//string::const_iterator it3;

//vector<int> v;
//auto it1 = v.cbegin(); //here it1 will become constant iterator

//(*it).empty(); //use bracket here for dereferencing

//it->mem is a synonym for (*it).mem
    
int main()
{
    
//    string hi = "Hello everyone";
//    if(hi.begin() != hi.end())
//        cout << hi->begin(); //equivalent to (*hi).begin()

   /* -----------Exercise 3.21 ---------------- */
   
//    vector<int> v (10,5);
//    for(auto it1 =v.begin(); it1<v.end();++it1)
//    {
//        cout << *it1 <<endl;
//    }

   /* -----------Exercise 3.22 ---------------- */
//    vector<string> text { "Hey, its rohan here"} ;
//    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
//        for(auto &x : *it)
//            x = toupper(x);
//    for (auto it = text.begin(); it != text.end() && (*it)!="\n"/*!it->empty()*/; ++it)
//        cout << *it;

   /* -----------Exercise 3.23 ---------------- */
//    vector<int> text {1,2,3,4,5,6,7,8,9,10};
//    for (auto it = text.begin(); it != text.end(); ++it)
//            *it = (*it)*2;
//    for (auto in = text.begin(); in != text.end(); ++in)
//        cout << *in << " ";

//    auto beg = text.begin(), end = text.end();
//    auto mid = text.begin() + (end - beg)/2;
//    
//    while(mid!=end && *mid != sought) {
//        if(sought < *mid) //element in first half
//            end=mid;      //ignore second half
//        else
//            beg = mid + 1; //ignore first half
//        mid = beg + (end - beg)/2; //new midpoint
//    }
    
   /* -----------Exercise 3.24 ---------------- */
//    cout << "Enter 8 integers "<<endl;
//    int number;
//    vector<int> nos;
//
//    for(int i=0;i<8;i++)
//    {
//        cin >> number;
//        nos.push_back(number);
//    }
//    
//    auto began = nos.begin();
//    auto ending = nos.end();
//    
//    for(auto n=0;n<4;n++)
//    {
//        cout << ((*(began+n)) + (*(ending-n-1))) << endl;
//    }

   /* -----------Exercise 3.25 ---------------- */
   
}
