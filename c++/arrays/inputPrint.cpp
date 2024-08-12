#include<iostream>
using namespace std;
int main(){
    int box[5000];
    int n;
    cout<<"how many numbers you want to add in array";
    cin>>n;
    for (int i=0;i<n;i++){
           cin>>box[i];
    }
    for(int i=0;i<n;i++){
        cout<<(2*box[i])<<endl;
    }
    return 0;
}
