// Input: arr[] = [0, 1, 2, 0, 1, 2]
// Output: [0, 0, 1, 1, 2, 2]
// Explanation: [0, 0, 1, 1, 2, 2] has all 0s first, then all 1s and all 2s in last.

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{

    //Brute Force
    // vector<int> arr = {1, 1, 0, 2, 0, 2, 1, 1, 0, 2, 1, 0, 2, 1, 2, 0};
    // for(int i =0 ; i< arr.size()-1; i++){
        // for (int j =i+1 ; j <arr.size();j++){
            // if(arr[i]>arr[j]){
                // swap(arr[i],arr[j]);
            // }
        // }
    // }
    // for(int i=0 ; i<arr.size()-1; i++){

        // cout<<arr[i]<< " ";
    // }



    //Optimal Solution 

    vector<int> arr = {1,0,1,2,0,2,1,0,1,2,0,1,0,0,2,1};
    int low =0;
    int high = arr.size()-1;
    int mid = 0;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;

        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int i =0 ; i<arr.size()-1;i++){
        cout<<arr[i]<<" ";
    }

}