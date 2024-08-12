#include<iostream>
using namespace std;
int fibonaci(int n){
    // base case
    if(n==1)
    return 0;
    if(n==2)
    return 1;

    //recursive relation
    int ans=fibonaci(n-1)+fibonaci(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"enter term you want to see";
    cin>>n;
    int ans=fibonaci(n);
    cout<<ans;
    return 0;
}
