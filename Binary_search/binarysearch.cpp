#include<iostream>
#include<vector>

using namespace std;

int findelement(vector<int>& arr , int target , int n){
    int st =0;
    int end = n-1;
    int mid = st + (end -st)/2;

    while(st<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if ( arr[mid]<target){
            st = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = st+ (end-st)/2;
    }
    return -1;
}

int main (){
    vector<int> arr= {3,5,7,9,11,23,45,67};
    int target = 45;
    int n = arr.size();

    int ele = findelement( arr , target , n);

    if(ele){
        cout<<"Element found at index : "<< ele;
    }
    else{
        cout<<"Element not found";
    }

}