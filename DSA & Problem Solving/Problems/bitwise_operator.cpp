#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int  a = 5 , b = 4 ; 
    /* in binary 
       5 = 101
       4 = 100 
    */

   cout<<" a & b " << (a&b) <<endl; // AND operator 
   /*
   101
   100
 & 100 =4  
   */  

   cout<<" a | b " << (a|b) <<endl; // OR  operator
    /*
   101
   100
 | 101 =4  
   */  

   cout<<" ~a" << (~a) <<endl; // NOT  operator
   cout<<abs(~a)-1 <<endl;// this staemt give orignal value
  /*
   101
~  fliping the bits
   111...010 

   Now we want to print so we need 2s complemnt 
    000..101 1s complemnt 
    00..110  2s complemnt
    110 = 6 (-6) becuse of sign bit
   */ 

// Shift operator << left shift   >> Right shift  
    cout<< (6<<2)<<endl; // shifting 2 bits left  of 6 ==  000110   ,  shifting  011000 = 24
    cout<< (6>>1)<<endl; // shifting 2 bits left  of 6 ==  000110   ,  shifting  000011 = 3
     
    return 0;
}
