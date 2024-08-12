#include <iostream>
using namespace std;
class animal
{
    // state or properties
private:
    int weight;

public:
    // default parameter
    animal()
    {
        this->weight = 0;
        this->age = 0;
        cout << "default constructor called" << endl;
    }

    // parameterised constructor
    animal(int age)
    {

        this->age = age;
        cout << " parameterised constructor called" << endl;
    }

    animal(int age, int weight)
    {

        this->age = age;
        this->weight = weight;
        cout << " parameterised constructor2 called" << endl;
    }

    /// copy constructor
    animal(animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        cout << "I am inside copy constructor" << endl;
    }

    int age;
    string name;
    // behaviour or functions
    void eat()
    {
        cout << "lion bhuka  hai " << endl;
    }
    void sleep()
    {
        cout << "lion so raha hai" << endl;
    }
    int getWeight()
    {
        return weight;
    }
    // void setWeight(int w)
    // {
    //     weight = w;
    // }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
};
int main()
{

    // objecct craetion

    //     // static
    //     animal a1;
    //     a1.age = 5;
    //     a1.name = "lion";
    //     cout << "age of animal: " << a1.age << endl;
    //     cout << "name of animal: " << a1.name << endl;
    //     a1.eat();
    //     a1.sleep();

    //     // to access private member inside class
    //     a1.setWeight(101);
    // cout<<"Weight: "<<a1.getWeight();

    // dynamic object crewatiom

    // animal *a2 = new animal;

    // (*a2).age = 12;
    // (*a2).name = "billi";
    // // OR
    // a2->age = 12;
    // a2->name = "billi";
    // cout << (*a2).age << endl;
    // a2->eat();
    //  a2->setWeight(101);
    //  cout<<"Weight: "<<a2->getWeight();

    animal a(12, 100);
    animal *b = new animal(100, 100);

    // object copy
    animal c = *b;

    // animal c(b);   ---> why this is not working?????

    animal d(c);

    return 0;
}