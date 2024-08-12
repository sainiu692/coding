#include<iostream>
using namespace std;
bool find(int arr[],int size,int key){
    //if key is present
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
            break;
        }
            // else{
            //     return false;
            // }
     
    }
    return false;
    //ye upar vala else block isliye nhi lga rhe hai kyu ki 1 key dalne par to shuru m if condition true
    //hokr true retun hora leki jaise 2 dala to vo else condition m pahuch k false return krra
}

int main(){
    int arr[6]={1,2,3,4,5,6,};
    
    int size=6;
    int key;
   cout<<"enter the key to found"<<endl;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}