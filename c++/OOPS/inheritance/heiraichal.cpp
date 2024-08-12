#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int model;

    void speed(){
        cout<<" hawa te tej"<<" ";
    }
};
class scarpio:public car{

};
class fartuner:public car{
    
};
int main(){
    scarpio s1;
    s1.speed();
    fartuner f1;
    f1.speed();
return 0;
}