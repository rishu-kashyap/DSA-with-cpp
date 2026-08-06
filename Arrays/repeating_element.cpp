// Input: arr[] = [10, 5, 3, 4, 3, 5, 6]
// Output: 5 
// Explanation: 5 is the first element that repeats
// 
// Input: arr[] = [6, 10, 5, 4, 9, 120, 4, 6, 10]
// Output: 6 
// Explanation: 6 is the first element that repeats
#include<iostream>
#include<vector>

using namespace std;

int main(){
    //Brute Force solution
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};
    
    for(int i =0; i<arr.size();i++){
        for(int j = i+1; j< arr.size();j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<< " ";
                return 0;
            }
        }
    }
    
}