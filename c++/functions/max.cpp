#include<iostream>
using namespace std;
int compare(int x,int y,int z);
int main(){
    int a,b,c;
    cout<<"enter three numbers :"<<endl;
    cin>>a>>b>>c;
    int result=compare(a,b,c);
    cout<<result;
return 0;
}
int compare(int x, int y,int z){
    if(x>y&&x>z)
    {
        // cout<<"x is maximum";
        return x;
    }
    else if(y>x&&y>z)
    {
        // cout<<"y is maximum";
        return y;
    }
    else{
        // cout<<"z is maximum";
        return z;
    }
}
