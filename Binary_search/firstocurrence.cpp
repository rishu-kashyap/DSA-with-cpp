#include<iostream>
#include<vector>


using namespace std;


int firstoccu(vector<int>& arr , int target , int n){
    int st =0;
    int end = n-1;
    int mid = st + (end -st)/2;
    int ans = -1;
    while(st<=end){
        if(arr[mid]==target){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end = mid -1;
        }

        mid = st + (end -st)/2;
    }
    return ans;

}


int main (){
    vector<int> arr= {3,6,6,6,6,12};
    int target = 16;
    int n = arr.size();

 
    int ele = firstoccu( arr , target,n);


    if(ele!= -1){
        cout<<"First occurence at index  :"<< ele;
    }
    else{
        cout<<"Element not found";
    }


}