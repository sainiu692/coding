#include<iostream>
using namespace std;
int*solve(){
    int a=5;
    int*ans=&a;
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of pointer ans is "<<&ans<<endl;
    return ans;
}
int main(){
   cout<<solve();
}
