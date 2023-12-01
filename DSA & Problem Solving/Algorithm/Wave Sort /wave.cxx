// wave form

// 3    7      6
//   1      4

// 3 1 7 4 6 2 5

#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[]{1, 3, 4, 7, 5, 6, 2};

    for (int i = 1; i < n - 1; i += 2)
    {
        if (arr[i] > arr[i - 1])
            swap(arr[i], arr[i - 1]);

        if (arr[i] > arr[i + 1] && i <= n - 2)
            swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// https://www.youtube.com/watch?v=N97M67GQTwI
