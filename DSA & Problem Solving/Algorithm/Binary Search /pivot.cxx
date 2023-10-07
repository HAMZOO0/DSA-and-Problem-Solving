#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    for (; start < end;)
    {
        if (arr[mid] > arr[0])
            start = mid + 1;
        
        else
            end = mid;

        mid = start + (end - start) / 2;
    }
    return start;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {8, 10, 17, 1, 3};

    cout << "pivot Element index is ::-> " << pivot(arr, 5);

    return 0;
}
/*


         17
1st   10       3   2nd line
   8         1
   

  * we need to find 1 (pivot elemnt) .

  * so if mid is grater then arr[0] then its means mid is on 1st line

  * else means mid is on 2 line so we put end = mid | not mid-1 becuse if mid is on pivot then mid-1 then we go forward to 2nd line .

*/
