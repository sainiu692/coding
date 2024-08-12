#include<iostream>
using namespace std;
// void check(int x){
//     if(x%2==0){
//         cout<<" entered number is even";
//     }
//     else{
//         cout<<" entered number is odd";
//     }
// }
bool checkEven(int n){
    if(/*n%2==0*/(n&1)==0){
        return true;// its an even number;
    }
    else{
        return false;//its an odd number;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"You entered the number: "<<n<<endl;
    // check(n);
    bool isEven = checkEven(n);
    if(isEven){
        cout<<n<<" is even number"<<endl;
    }
    else{
        cout<<n<<" is odd number"<<endl;
    }
    return 0;

    }