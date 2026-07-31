#include<iostream>
#include<vector>
using namespace std;

int main (){
    //Creating vector
    vector<int> arr;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<< endl;

    arr.push_back(10);
    arr.push_back(20);


    for(int i =0 ;i < 2 ;i++){
        
    cout<<arr[i]<<endl;
    }