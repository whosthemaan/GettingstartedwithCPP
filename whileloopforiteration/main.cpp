#include <iostream>
#include <vector>
using namespace std;

vector<int> vec {1,2,3,4,5,6,-99};

count_numbers() {
    unsigned int count {};
    unsigned int size = vec.size();
    
    bool test = true;
    while(test)
    {
        if(count<size)
        {
            if(vec[count] == -99)
            {
                test = false;
            }
            else
            {
                count++;
            }
        }
        else
        {
            test=false;
        }
    }
    
    cout<< count <<endl;
    return 0;
}

int main()
{
    count_numbers();
}
//count_numbers();