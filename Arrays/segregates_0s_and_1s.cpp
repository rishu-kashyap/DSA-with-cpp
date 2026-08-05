#include<iostream>
#include<vector>

using namespace std ;

int main (){
    vector<int> arr = {0,1,0,1,1,0,1,1,1,1,0,0,0};

    int start = 0;
    int end =arr.size()-1;

    while(start<=end ){
        if (arr[start]==0){
            start++;
        }
        else{
            swap(arr[end],arr[start]);
            end--;
        }
    }
    for(int i =0 ; i<arr.size();i++){
        cout<<arr[i]<< " ";
    }

}