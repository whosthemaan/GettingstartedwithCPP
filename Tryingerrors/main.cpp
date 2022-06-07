#include <iostream>
#include <Sales_item.h>

using namespace std;

int main()
{
//    int val {50}, sum {}, num {10};
//    while(val<=100)
//    {
//        sum += val;
//        ++val;
//    }

//    for(int val=50;val<=100;val++)
//        sum+=val;
//    cout <<sum;

//    while(num>0)
//    {
//        cout<<num<<endl;
//        num--;
//    }
    
//    for(int num=10;num>0;num--)
//        cout<<num<<endl;

    int currval = 0 , val = 0;
    if (cin >> currval) {
        int count = 1;
        while(cin >> val)
        {
            if(val == currval)
                ++count;
            else
            {
                cout << currval << " occurs " << count << " times" <<endl;
                currval = val;
                count = 1;
            }
        }
        cout << currval << " occurs " << count << " times" <<endl;
    }
    return 0;
}