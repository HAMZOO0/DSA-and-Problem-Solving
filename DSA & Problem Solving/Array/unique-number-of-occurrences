#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool print(vector<int> myVector)
{
    // printing the vector
    for (int i = 0; i < myVector.size() - 1; ++i)
    {
        for (int j = i + 1; j < myVector.size(); j++)
        {
            if (myVector[i] == myVector[j])
                return false;

            
        }
    }
    return true;
}
int main()
{

    int arr[5] = {1, 16, 1, 44, 44};

    std::sort(arr, arr + 5);

    int count{};

    vector<int> myVector;

    for (int i = 0; i < 5; i += count)
    {
        count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                ++count;
            }
        }
        myVector.push_back(count);
    }

    // printing the vector
    bool decsion = print(myVector);
    if (decsion == 0)
    {
        cout << "False";
    }
    else
        cout << "True";

    return 0;
}
