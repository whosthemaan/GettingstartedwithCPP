#include <iostream>
#include <vector>
using namespace std;

vector<int> vec {1,2,3};

calculate_pairs() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int siz {}, result {};
    siz = vec.size();
        
    for(int i=0;i<siz;i++)
    {
        for(int j=i+1;j<siz;j++)
        {
            result += (vec[i] * vec[j]);
        }
    }
     
    return result;
}

int main()
{
    cout << calculate_pairs();
    return 0;
}