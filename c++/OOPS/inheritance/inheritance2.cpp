#include <iostream>
using namespace std;
class animal
{
protected:
    int age;
};

// class dog : protected animal
// {

// public:
//     void print()
//     {
//         cout << this->age;
//     }

// };


class dog : private animal
{

public:
    void print()
    {
        cout << this->age;
    }

};

// class dog : public animal
// {
//     // ye child class inherit karte hi 
//     // parent class k jo bhi data member and functions hai
//     //vo isme hamne jo bhi mode of inheritance  use krke inherit kre hai
//     // isme childclass mein copy ho jaynege as a chart output acess modifier.
//     //but vo hame dikhte nhi hai
    
// public:
//     void print()
//     {
//         cout << this->age;
//     }
// };
int main()
{
    dog d1;
    // cout<<d1.age;  cannot acces this`
    //yhan sirf ham call kr rhe hai print function ko acess ham usko class k ander hi kr rhe hai
    d1.print();
}