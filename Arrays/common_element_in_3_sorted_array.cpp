#include <iostream>
#include <vector>
#include<limits.h>

using namespace std;

int main()
{
    vector<int> array1 = {1, 2, 3, 4, 5};
    vector<int> array2 = {3, 4, 5, 6, 7};
    vector<int> array3 = {3, 4, 7, 8, 9};
    vector<int> common;

    int i = 0, j = 0, k = 0;

    while (i < array1.size() && j < array2.size() && k < array3.size()){
        if(array1[i]==array2[j]&& array2[j]==array3[k]){
            common.push_back(array1[i]);
            i++;
            j++;
            k++;

        }
        else if( array1[i]<array2[j]){
            i++;
        }
        else if(array2[j]<array3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    for(int l =0 ;l<common.size();l++){
        cout<<common[l]<<" ";
    }
}