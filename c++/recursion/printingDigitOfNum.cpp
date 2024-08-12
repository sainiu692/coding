#include<iostream>
using namespace std;
int printDigits(int n){
    // base case
    if(n==0){
        return 0;
    }
    int newValueOfn=n/10;
    //baki recursion

    printDigits(newValueOfn);

    //1 case solve kra
    int digit =n%10;
    cout<<digit<<" ";
}
int main(){
    int n=0647;
    if(n==0){
        cout<<"0";
    }
    printDigits(n);
    return 0;
}