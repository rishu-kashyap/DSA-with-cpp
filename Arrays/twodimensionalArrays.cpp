#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    //Taking 2D input 
    cout<<"Enter the value of row and column";
    int arr [3][3];
    for(int i =0 ; i<3 ; i++){
        for(int j=0 ; j< 3; j++){
            cin>>arr[i][j];
        }
    }



    //Printing Output row-wise
    

    for(int i = 0; i< 3;i++){
        for(int j =0 ; j<3;j++){
            cout<< arr[i][j]<< " ";
        }
        cout<<endl;
    }
}