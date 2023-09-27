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
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
               // cout<<"i = "<<i<<" j = "<<j<<" k= "<<k<<endl;
                if (arr[i] + arr[j] + arr[k] == 5)
                {
                    myVector.push_back(arr[i]);
                    myVector.push_back(arr[j]);
                    myVector.push_back(arr[k]);
                }
            }
        }
    }

    for (int i = 0; i < myVector.size(); ++i)
    {

        cout << myVector[i] << " ";
    }
    return 0;
}
