#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(char arr[]){
    int i=0;
    int n = strlen(arr);
    int j=n-1;
    while(i<=j){
      if(arr[i]!=arr[j]){
        return false;
      }
      else{
        i++;
        j--;
      }
  }
  return true;
}
int main(){
char check[100];
cin>>check;
cout<<" checking palindrome: "<<checkPalindrome(check)<<endl;
return 0;
}
