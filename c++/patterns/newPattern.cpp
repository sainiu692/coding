#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int star=row+1;
        for(int col=0;col<row+1;col++){
            cout<<star;
            star=star+1;

        }
        cout<<endl;
    }
    return 0;
} 