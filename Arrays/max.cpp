#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[] = {1, 5, 30, 18, 52, 18, 22, 14, 2, 17, 21, 11};
    int maxNumber = INT_MIN;

    for (int i = 0; i < 13; i++)
    {

        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }
    cout << maxNumber << endl;
}