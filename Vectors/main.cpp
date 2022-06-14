#include <iostream>
#include <vector> //class template
using namespace std;
//vector<string> d = {1,2,3,4} or {"a", "e", "i", "o", "u"}; //vector<int> a(10,1) -- int vector with 10 elements, each with value 1
//vector<string> a(b); // copies elements of b to a

int main()
{
    /* ----------- Exercise 3.14 --------------- */
//    vector<int> data;
//    int values;
//    while(cin >> values)
//        data.push_back(values);
        
    /* -----------Exercise 3.15 ---------------- */    
//    vector<string> data;
//    string values;
//    while(cin >> values)
//        data.push_back(values);

//    vector<unsigned> scores(11,0);
//    unsigned grade;
//    while(cin>>grade)
//    {
//        if(grade <=100)
//        {
//            ++scores[grade/10];
//        }
//    }

    /* -----------Exercise 3.16 ---------------- */
//    vector<int> v (10,5);
////    decltype(v.size()) index = v.size();
////    cout << index;
//    for(decltype(v.size()) index = 0; index<v.size();++index)
//    {
//        cout << v[index] <<endl;
//    }
    
    /* -----------Exercise 3.17 ---------------- */
//    string words;
//    vector<string> a;
//    while((cin >> words) && (words!="done"))
//       { a.push_back(words); }
//        
//    for(string &s : a)
//        {
//            for(char &c : s)
//                c = toupper(c);
//        }
//        
//    for(decltype(a.size()) index = 0; index < a.size();++index)
//        {
//            cout << a[index] << " ";
//        }
//

    /* -----------Exercise 3.19 ---------------- */
//    vector<int> v (10, 42); // Method 1
//    vector<int> v {42,42,42,42,42,42,42,42,42,42}; // Method2
//    vector<int> v (10); //Method 3
//    for(auto &x : v)
//        x = 42;
//    for(auto &a : v)
//        cout << a << " ";

    /* -----------Exercise 3.20 ---------------- */        
//    cout << "Enter 8 integers "<<endl;
//    int number;
//    vector<int> nos;
//    for(int i=0;i<8;i++)
//    {
//        cin >> number;
//        nos.push_back(number);
//    }
//    
//    for(int x=0;x<4;x++)
//    {
//        cout << nos[x] + nos[7-x];
//    }
    
    return 0;
}