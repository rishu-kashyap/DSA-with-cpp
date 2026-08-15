#include<iostream>

using namespace std;

double findsquareroot(int n, int precision )
{
    int start =0;
    int end = n;
    
    double ans = -1;
    while(start<=end){
        long long  mid = start+ (end-start)/2;
        if(mid*mid==n){
            return mid;
            break;
        }
        else if (mid*mid < n){
            ans = mid ;
            start=mid +1;

        }
        else{
            end = mid-1;
        }
    }
    
    double step = 0.1;
    for(int i =0 ; i<precision;i++){
        for(double j =ans;j*j<=n;j+=step){
            ans=j;
        }
        step=step/10;
    }
    return ans;
}
int main(){
    cout<<"Enter the square root value: ";
    int n;
    cin>>n;

    cout<<"Enter the precision value :" ;

    int precision;
    cin>>precision;

    double ans = findsquareroot(n,precision);
    cout<<ans;
}