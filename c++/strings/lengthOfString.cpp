#include<iostream>
#include<string.h>
using namespace std;
 int getLength(char arr[]){
        int length=0;
        int i=0;
        while(arr[i] != '\0'){
            length++;
            i++;
        }
        return length;
    }
int main(){
    char name[100];
    cin>>name;
    cout<<"length is: "<<getLength(name)<<endl;
    cout<<"length is: "<<strlen(name)<<endl;
    // above strlen() is predefined function to calculate the length of string.

    return 0;
}