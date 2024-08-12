#include<iostream>
using namespace std;
 void reverseString(string&str,int s,int e){
       // base case
       if(s>=e){
        return;
       }
       //1 case
       swap(str[s],str[e]);
       //recursive call
        reverseString(str,s+1,e-1);

 }
int main(){
    string str;
    cin>>str;
    int s=0;
    int e=str.length()-1;
    reverseString(str,s,e);
    cout<<str;
    return 0;

}