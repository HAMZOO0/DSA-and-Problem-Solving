#include <iostream>
#include <string>
#include <algorithm> 


using namespace std;
int main() {
 
    // Task 4 : Extract the last three characters of the concatenated fifth string and store it in a sixth string.
    
    string result = "hamza" ;
  string  lastThreeChars = result.substr(result.length() - 3,result.length());

    cout<<"Task 4 # \n Here is String :: "<<result<<endl;
    cout << "Last three characters of the concatenated string: " << lastThreeChars << endl<<endl<<endl;



    return 0;
}


