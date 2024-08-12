#include<iostream>
using namespace std;
int factorial(int n){
    // base case
    if(n==1||n==0){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int give=factorial(n);
    cout<<give;
    return 0;
}