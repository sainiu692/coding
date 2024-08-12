#include<iostream>
#include<vector>

using namespace std;
int main(){
    int arr[4]={12,44,66,18};
    cout<<arr<<endl;
    // arr and &arr are same thing.
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    int *p=arr;
    // cout<<p<<endl<<&p; //herre p and &p are not same thing like arr and &arr. 





    cout<<*arr<<endl;
    cout<<arr[0]<<endl; 
    cout<<*arr+1<<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<(arr[1])<<endl;
    cout<<*(arr+2)<<endl;
    cout<<(arr[2])<<endl;
    cout<<*(arr+3)<<endl;
    cout<<(arr[3])<<endl;

//   arr[i]  and  i[arr] are same thing because they both are resolve as *(arr+i).

    return 0;
}


