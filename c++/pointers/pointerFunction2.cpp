#include<iostream>
using namespace std;
void solve(int *p){
    cout<<"address stored in p is: "<<p<<endl;
    cout<<"address of p is : "<<&p<<endl;
    *p = *p+10;
}
int main(){
    int a=5;
    cout<<"address of a is:" <<&a<<endl;
    int *ptr=&a;
    cout<<"address stored in ptr is: "<<ptr<<endl;
    cout<<"address of ptr is: "<<&ptr<<endl;

    solve(ptr);
    cout<<a<<endl;
    return 0;
}