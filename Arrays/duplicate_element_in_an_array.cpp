// Input: arr[] = [2, 3, 1, 2, 3]
// Output: [2, 3] 
// Explanation: 2 and 3 occur twice in the given array.
// 
// Input: arr[] = [3, 1, 2] 
// Output: [] 

#include<iostream>
#include<vector>

using namespace std;

int main (){
    vector <int> nums= {4, 3, 1, 2, 3};
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }
        cout<<nums[0];
}