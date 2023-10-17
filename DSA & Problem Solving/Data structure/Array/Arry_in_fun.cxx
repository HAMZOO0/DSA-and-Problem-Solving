#include<iostream>
using namespace std;
void arrR(int *ary  , int size)
{
   std::cout<<&ary<<" "<<*ary; // & ary is address of arry 
      std::cout << ary << " " << *ary; // ary is adddress of 1st elemnt 

}
int main(int argc, char const *argv[])
{
   int arr[3]={0,1,2};
   for (int i = 0; i < 3; i++)
   {
std::cout<<&(arr[i])<<" "<<arr[i]<<std::endl;
   }
   arrR(arr,3);
    return 0;
}
