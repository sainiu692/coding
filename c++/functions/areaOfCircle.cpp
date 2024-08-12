#include<iostream>
using namespace std;
float getArea(float x){
    float area =3.14*x*x;
    return area;

}
int main(){
    float radius;
    cin>>radius;
    float result=getArea(radius);
    cout<<result<<endl;
    return 0;
    
}