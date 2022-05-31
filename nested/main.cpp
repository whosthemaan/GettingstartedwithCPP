#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "How many data items do you have? " ;
    
    int count {};
    cin >> count;
    
    vector<int> data{};
    int item {};
    
    for(int i=0; i<count; i++)
    {
        cout << "Enter item number " << i+1 << " ";
        cin >> item;
        data.push_back(item);
    }
    
    for(auto x:data)
    {
        cout << "The item number x is " << x <<endl; 
    }
    
    return 0;
}