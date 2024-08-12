#include <iostream>
using namespace std;
class fruit
{
public:
    string name = "saini";
};

class mango : public fruit
{
public:
    int weight = 10;
};

class langdaa : public mango
{
public:
    int sugarLevel;
};
int main()
{
    langdaa l;
    cout << l.name << endl
         << l.weight << endl
         << l.sugarLevel << endl;
}
