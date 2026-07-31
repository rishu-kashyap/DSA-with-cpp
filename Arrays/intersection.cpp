#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={10,20,30,50};
    int size = 4;
    int brr[]={1,20,3,4,50};
    int size2 =5;

    vector <int> array;
    for(int i = 0 ;i< size; i++){
        for(int j =0 ; j< size2; j++){
            if(arr[i]==brr[j]){
                array.push_back(arr[i]);
            }
        }
    }

    for (int i =0 ; i< array.size();i++){
        cout<<array[i]<<endl;
    }
}