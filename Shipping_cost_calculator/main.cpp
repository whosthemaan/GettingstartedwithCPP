#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float length {0}, width {0}, height {0};
    float base_cost {2.5}, vol {0}, cost {0};
    
    cout << "Enter the dimensions of the package in inches\n";
    cin >> length >> width >> height;
    cout << fixed << setprecision(2);
    
    if(length <=10 && width <=10 && height <=10)
    {
        vol = length*width*height;
        if(vol>100)
        {
            cost = base_cost + (1.1*vol);
        }
        else if(vol>500)
        {
            cost = base_cost + (1.25*vol);
        }
        else{
            cost = base_cost;
        }
        cout << "The total cost is: $" << cost <<endl;
    }
    else{
        cout << "We cannot ship package with dimension: " << length << " x "<< width << " x "<< height << "."<<endl;
    }
    return 0;
}