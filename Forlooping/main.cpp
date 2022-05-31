#include <iostream>
#include <vector>
#include <iomanip> 

using namespace std;

//int main()
//{
//    int arr[] {1,2,3,4};
//    
//    for (int i{0}; i<=3; ++i)
//        cout << arr[i] <<endl;
//        
//    return 0;
//}

    // while(count<size)
    // {
    //     if(vec[count]== -99)
    //     {
    //         break;
    //     }
    //     count++;
    // }

// range based for loop

int main()
{
//    int scores[] {1,2,3,4};
    vector<double> temperatures {1.5,2.5,3.5,4.5};
    double sum {};
    
    
    for (auto temp : temperatures)
        sum += temp;
        
    cout << fixed << setprecision(1);
    cout << sum <<endl;
        
    return 0;
}