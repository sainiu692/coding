#include<iostream>
using namespace std;
void solve(int arr[]){
    // upar solve function mein humne jo array pass kiya hai vo array
    // nhi pass hua hai vo pointer pass hua hai.
     cout<<"size inside function "<<sizeof(arr)<<endl;
     cout<<"arr: "<<arr<<endl;
     cout<<"&arr: "<<&arr<<endl;
     arr[0]=50;
}
int main(){
    // int arr[10]={1,2,3,4};
    // cout<<"size inside main function "<<sizeof(arr)<<endl;
    // solve(arr);


    int arr[10]={1,2,3,4};
    cout<<"size inside main function: "<<sizeof(arr)<<endl;
    //printing array inside main

    cout<<"arr: "<<arr<<endl;
     cout<<"&arr: "<<&arr<<endl;

     
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<endl<<endl<<"now calling solve function"<<endl;

    solve(arr);

    cout<< "wapas main function mein a gye hai"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl; 
    return 0;
}  