#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 7, 4, 8, 9, 3};
    int j = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}