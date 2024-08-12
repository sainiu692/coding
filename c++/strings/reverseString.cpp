#include<iostream>
#include<string.h>
using namespace std;
int reverseCharArray(char arr[]){
    int i=0;
    int n  = strlen(arr);
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    char name[100];
    cin>>name;
    cout<<"initially: "<<name<<endl;
    reverseCharArray(name);
    cout<<"fianlly after reversing: "<<name<<endl;
    return 0;
    
}