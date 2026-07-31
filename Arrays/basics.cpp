#include<iostream>
using namespace std;


bool find(int arr[],int size,int key){

    for(int i =0 ;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;

}

int main(){
    // int arr[5];
    // for(int i =0 ;i<5;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Double:"<<endl;

    // for(int i =0 ;i < 5 ; i++){
    //     cout<<2*arr[i]<< " ";
    // }


    int arr[]= {1,3,5,6,7,8,9};
    int key;
    cin>>key;
    int size = 8;


    if (find(arr, size, key)){
        cout<<"found";

    }
    else{
        cout<<"not found";
    }
}