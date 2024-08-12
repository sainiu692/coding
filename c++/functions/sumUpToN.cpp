#include<iostream>
using namespace std;
int getSum(int x){
    int sum=0;
    for(int i=2;i<=x;i=i+2){
        sum=sum+i;
    }
    // for(int i=1;i<=x;i++){
    //     if(i%2!=0)
    //     {
    //     sum=sum+i;
    //     }
    // }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int show=getSum(n);
    cout<<"Sum upto "<<n<<"is: "<<show<<endl;
    return 0;
}

