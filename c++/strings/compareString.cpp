#include<iostream>
#include<string>
using namespace std;
bool compareString(string a, string b){
    if(a.length()!=b.length()){
        return false;
    }
    // yhan else isliye nhi lgaya kyuki upar return false kr diya uske 
    // execute hote hi fxn se bahar 
        for(int i=0;i<a.length();i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
}
int main(){
    string a="helloji";
    string b="helloji";
    if(compareString(a,b)==true){
        cout<<"strings are same"<<endl;
    }
    else{
        cout<<"strings are not same"<<endl;
    }
    string x="jjcd";
    string y="jbcd";
    cout<<x.compare(y)<<endl;
    string sentence = "hello ji how are you";
    string target ="how";
    // cout<<sentence.find(target);
    if(sentence.find(target)==std::string::npos){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }







    string oye="this is a best person";
    string word="Saini";
    oye.replace(10,4,"rude");
    cout<<oye<<endl;
return 0;
}