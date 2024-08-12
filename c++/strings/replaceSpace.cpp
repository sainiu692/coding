#include<iostream>
#include<string.h>
using namespace std;
int replaceSpace(char arr[]){
    int i=0;
    int n=strlen(arr);
    int j=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            arr[i]='@';
        }
    }
 
}
int main(){
    char sentence[100];
    cin.getline(sentence,50);
    replaceSpace(sentence);
    cout<<sentence;
    return 0;
}