#include<iostream>
using namespace std;

int main(){
    
    int arr[]= {1,0,1,0,1,0,1,0,1,0,1,0,1};
    int zeroNum = 0;
    int oneNum = 0;
    for(int i =0 ;i< 14;i++){
        if (arr[i] == 0){
            zeroNum= zeroNum+1;
        }
        else{
            oneNum = oneNum+1;
        }
    }
    cout<<zeroNum<<endl;
    cout<<oneNum<<endl;
}