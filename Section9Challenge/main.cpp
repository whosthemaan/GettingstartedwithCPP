#include <iostream>
#include <vector>
#include <list>
using namespace std;
#include <bits/stdc++.h>

list collection {1,2,3};
char value {};
int main()
{
    do {
        cout << "P - Print numbers" <<endl;
        cout << "A - Add a number" <<endl;
        cout << "M - Display mean of the numbers" <<endl;
        cout << "S - Display the smallest number" <<endl;
        cout << "L - Display the largest number" <<endl;
        cout << "Q - Quit" <<endl;
        cin >> value;
        
        if((value == 'P' || value=='p') & !collection.empty())
        {
            cout<< "[ ";
            for(auto comp:collection)
            {
                cout << comp;
            }
            cout<< " ]" <<endl;
        }
        else if((value == 'P' || value=='p') & collection.empty())
        {
            cout << "[] - the list is empty";
        }
//        else if(value == 'A' || value=='a')
//        {
//            cout << "Please enter an integer to be added";
//            cin >> num;
//            collection.push_back(num);
//            cout << num << " added" <<endl;
//        }
//        else if((value=='M' || value=='m') & !collection.empty())
//        {
//            int sum {}, average {};
//            for(auto each:collection)
//            {
//                sum += each;
//            }
//            cout << "Average: " << sum/collection.size() << endl; 
//        }
//        else if((value=='M' || value=='m') & collection.empty())
//        {
//            cout << "Unable to calculate the mean - no data" << endl;
//        }
//        else if((value=='S' || value=='s') & !collection.empty())
//        {
//            cout << "The smallest number is " << min(collection) << endl; 
//        }
//        else if((value=='S' || value=='s') & collection.empty())
//        {
//            cout << "Unable to determine the smallest number - list is empty" << endl;
//        }
//        else if((value=='L' || value=='l') & !collection.empty())
//        {
//            cout << "The largest number is " << max(collection) << endl; 
//        }
//        else if((value=='L' || value=='l') & collection.empty())
//        {
//            cout << "Unable to determine the largest number - list is empty" << endl;
//        }
//        else{
//            cout << "Unknown selection, please try again" << endl;
//        }
    } while((value != 'Q') || (value != 'q'));
    cout << "Goodbye" <<endl;
    return 0;
}