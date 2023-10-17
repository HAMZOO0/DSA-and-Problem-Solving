#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int arr[5] = {1, 3, 1, 10, 7};

    std::sort(arr, arr + 5);

    vector<int> myVector;

    for (int i = 0; i < 5; i++)
    {

        for (int j = i+1; j < 5; j++)
        {
            if (arr[i] + arr[j] == 10)
            {
                myVector.push_back(arr[i]);
                myVector.push_back(arr[j]);
            }
        }
    }

    for (int i = 0; i < myVector.size() ; ++i)
    {
        
       cout << myVector[i] << " ";
  
    }
    return 0;
}

