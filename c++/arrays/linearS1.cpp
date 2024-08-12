#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    bool flag=0;
    //0->not found
    //1->found
    int key;
    cout<<"Enter the key you want to search: "<<endl;
    cin>>key;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key){
            flag=1;
            // cout<<"found"<<endl;
        }
    }
    if(flag){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    // cout<<"not found";

    return 0;
}
