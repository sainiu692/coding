#include <iostream>
using namespace std;
class car
{
public:
    string name;
    int model;
    int weight;
    void speed()
    {
        cout << "500 paarr" << endl;
    }
    void breakk()
    {
        cout << " hai ni" << endl;
    }
};
class scarpio : public car
{
};
int main()
{
    scarpio sainiWaali;
    sainiWaali.speed();
    sainiWaali.breakk();
    return 0;
}
