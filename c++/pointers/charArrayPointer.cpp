#include<iostream>
using namespace std;
int main(){
    char ch[10]="babbar";
    char *c=ch;

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    cout<<&ch[0]<<endl;
    
    cout<<&c<<endl;
    cout<<*c<<endl;
    cout<<c<<endl;


    return 0;
}