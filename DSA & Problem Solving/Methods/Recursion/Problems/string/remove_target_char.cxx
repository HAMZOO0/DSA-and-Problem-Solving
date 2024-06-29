
#include <iostream>
using namespace std;

string clearn_string ={};
string clean(string st, int start, int end, char target)
{
    if (start > end)
    {
        return clearn_string;
    }

// if we not found target char then 
    if (st.at(start) != target)
    {
        clearn_string += st.at(start);
        clean(st, ++start, end, target);
    }

    //if we found target char 
    else
    {
        clean(st, ++start, end, target);
    }
}
int main(int argc, char const *argv[])
{
    string a = "aabbcc";

    cout << clean(a, 0, a.size() - 1, 'a');

    return 0;
}
