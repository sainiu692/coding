#include<iostream>
using namespace std;
void print(int num){
    ++num;
    num++;
    cout<<num<<endl;
    --num;
}
int main(){
    int num=12;
    cout<<num++<<endl;
    cout<<num<<endl;
    ++num;
    print(num);
    --num;
    cout<<num;
    return 0;
}