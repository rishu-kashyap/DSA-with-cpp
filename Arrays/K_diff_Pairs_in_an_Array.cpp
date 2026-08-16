#include <iostream>
#include <vector>
#include<set>


using namespace std;


int finddifference(vector<int> &nums, int target)
{
    set<pair<int,int>> ans ;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (abs(nums[i] - nums[j]) == target)
            {
               ans.insert({nums[i],nums[j]});
            }
        }         
    }
     return ans.size();
}


int main(){
        vector<int> nums = {3, 1, 4, 1, 5};
        int target = 2;
        int ans = finddifference(nums, target);
        cout << ans;
}