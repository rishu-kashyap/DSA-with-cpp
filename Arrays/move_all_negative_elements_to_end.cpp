#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int>  arr={3,-1,4,-6,2,4,1,6,-2,-5,3,4};

    int low =0;
    int high =arr.size()-1;

    while(low<high){
        if(arr[low]>=0){
            low++;
        }
        else if (arr[high]<0)
        {
            high--;
        }
        else{
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
        
    }

    for(int i =0 ; i< arr.size()-1;i++){
        cout<<arr[i]<< " ";
    }

}