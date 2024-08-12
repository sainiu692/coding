#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // cout<<&a<<endl;
    // //pointer create
    // int*ptr=&a;
    // //access the value ptr is pointing to using derefrence operator.
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    // // it means  ptr and &a are dame things



    // int j=6;
    // int *ppr=&j;
    // cout<<sizeof(ppr)<<endl;

    // char ch='b';
    // char *c=&ch;
    // cout<<sizeof(c)<<endl;

    // double d=1.03;
    // double *dtr=&d;
    // cout<<sizeof(dtr)<<endl;

    // int *kyu;//pointer declaration is a bad practice,so we declare NULL Pointer.
    // cout<<*kyu;

//  below there are three ways to dcelare NULL Pointer.
//    int *ptr=0;
//    int *ptr=NULL;
//    int *ptr=nullptr;
//    cout<<*ptr<<endl;

int s=5;
int *ptr=&s;
//here we are copying the pointer.
int *dusraPtr=ptr;
cout<<*ptr<<endl<<*dusraPtr;
    return 0;
}