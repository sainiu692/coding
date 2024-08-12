#include <iostream>
using namespace std;
class A
{
public:
    int chemistry;
    A()
    {
        chemistry = 100;
    }
};
class B
{
public:
    int chemistry;
    B()
    {
        chemistry = 510;
    }
};

class C : public A, public B
{
public:
    int maths;
};
int main()
{
    C c1;
    cout << c1.B::chemistry << " " << c1.maths << endl;
    // we use above :: ->scope resolution operator to avoid ambiguity
    return 0;
}