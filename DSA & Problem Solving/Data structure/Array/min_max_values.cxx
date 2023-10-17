#include <iostream>
using namespace std;
void Mmax(int *arr, int size)
{
    int max_num = arr[0];
    for (int i = 0; i < size; i++)
    {
       max_num= max(max_num, arr[i]); // same as below code block but it is predefined functio nto find max value
        // if (max_num < arr[i])
        // {
        //     max_num = arr[i];
        // }
    }
    cout << "Max Value of  Array is :: " << max_num << endl;
}

void Mmin(int *arr, int size)
{
    int min_num = arr[0];

    for (int i = 0; i < size; i++)
    {
     min_num = min(min_num, arr[i]); // it is same as  below code block but predefined function to find min value
                              // if (min_num > arr[i])
                              // {
                              //     min_num = arr[i];
                              // }
    }
    cout << "Min Value of Array is :: " << min_num << endl;
}

int main(int argc, char const *argv[])
{
    int Arr[5] = {19, 27, 90, 74, 5};

    int size = sizeof(Arr) / sizeof(Arr[0]);

    Mmax(Arr, size);
    Mmin(Arr, size);
    return 0;
}
