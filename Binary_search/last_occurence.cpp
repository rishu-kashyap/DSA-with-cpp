#include <iostream>
#include <vector>

using namespace std;

int lastoccu(vector<int> &arr, int target, int n)
{
    int st = 0;
    int end = n - 1;
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            st = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 6, 6, 6, 6, 12};
    int target = 6;
    int n = arr.size();

    int ele = lastoccu(arr, target, n);

    if (ele != -1)
    {
        cout << "First occurence at index  :" << ele;
    }
    else
    {
        cout << "Element not found";
    }
}