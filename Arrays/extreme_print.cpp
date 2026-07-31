#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[] = {1, 5, 30, 18, 52, 18, 22, 14, 2, 17, 21};
    int size = 11;

    int start = 0;
    int end = size-1;   

    while(start <= end){
        if(start == end){
            cout<<arr[start];
        }else{
            
        cout<<arr[start]<<" ";
        cout<<arr[end]<< " ";

        }
        start++;
        end--;
    }
}