#include <iostream>
#include <vector>

using namespace std;

int firstoccu(vector<int> &arr, int target, int n)
{
    int st = 0;
    int end = n - 1;
    int mid = st + (end - st) / 2;
    int ans = -1;
    while (st <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return ans;
}

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
    vector<int> arr = { 3, 6, 6,  6, 6,6,6,6,6,8 };
    int target = 6;
    int n = arr.size();

    int total = lastoccu(arr, target, n) - firstoccu(arr, target, n) + 1;

    if (total != -1)
    {
        cout << "Total occurence is :-   " << total;
    }
    else
    {
        cout << "Element not found";
    }
}