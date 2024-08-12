#include<iostream>
using namespace std;
int main(){
    int n=3;
    int ans=0;
    while(n!=0){
        if(n&1){
            cout<<"got set bit: "<<ans<<endl;
            ans++;
    }
        // n&1;
        // ans++;
        
       n= n>>1;
    }
    cout<<" number of set bits: "<<ans<<endl;
    // char ch=-25;
    // cout<<ch;
    return 0;
}