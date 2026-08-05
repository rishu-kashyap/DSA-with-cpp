#include <iostream>
#include <vector>

using namespace std;

int findduplicate(vector<int> &arr, int n)
{
    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;
        if (arr[index] != arr[i])
        {
            swap(arr[index], arr[i]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==arr[i+1]){
            cout<<i+1;
        }
    }
}

int main()
{
    vector<int> arr = {1, 3, 5, 3, 4};
    int n = arr.size();
    findduplicate(arr, n);
}