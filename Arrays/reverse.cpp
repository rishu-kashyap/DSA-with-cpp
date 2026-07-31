#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[] = {1, 5, 18, 52, 18, 22, 14, 2, 17, 21,19};
    int size = 11;

    int start = 0;
    int end = size-1;   

    while(start < end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]= temp;
        start++;
        end--;
    }

    for(int i =0 ;i<size ;i++){
        cout<<arr[i]<<" ";
    }
}