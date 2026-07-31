#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main (){
    int arr[]={10,20,30,50};
    int size = 4;
    int brr[]={1,2,3,4,5};
    int size2 =5;

    vector<int> array;

    for(int i =0 ;i<size;i++){
        array.push_back(arr[i]); 
    }
    for(int i =0 ;i<size2;i++){
        array.push_back(brr[i]); 
    }

    for(int i =0 ; i<array.size();i++){
        cout<<array[i]<<" ";
    }
}