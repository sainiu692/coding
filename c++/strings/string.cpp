#include<iostream>
#include<string>
using namespace std;
int main(){
    //string create
    string str;
    // cin>>str;
    getline(cin,str);
    cout<<"length of string is:"<<str.length()<<endl;
    cout<<str.substr(0,6)<<endl;
    //the upword substr function is used to generate the suvstring or a 
    //part of a string from particular string.
    string a="saini";
    string b="saini";
    if(a.compare(b)==0){
        cout<<"a and b are same strings"<<endl;
    }
    else{
        cout<<"a and b are not same strings"<<endl;
    }
  //  upward function is used to compare two above strings. 
    return 0;

}
