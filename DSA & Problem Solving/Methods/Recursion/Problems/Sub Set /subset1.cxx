/*
Hamza
23
topic:
*/
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    solve(nums, output, index, ans);

    return ans;
}

int main(int argc, char const *argv[])
{vector<int> file = {1,2,3};
  vector<vector<int>> store =  subsets(file);


  for (int i = 0; i < store.size(); i++)
  {
    for (int j = 0; i < store.size(); j++)
    {
       cout<<store[i][j]<<" ";
    }
    
  }
  




    return 0;
}
