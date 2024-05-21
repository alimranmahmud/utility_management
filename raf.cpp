#include <iostream>
#include <tuple>

using namespace std;

class UtilityGass
{
public:
    string gassName, paymentname, userName, distric, divition, currentPlace;
    int phoneNumber, paymentNumber, transitionId;
    void setValue(string g, string p, string u, string d, string div, string c)
    {
        gassName = g;
        paymentname = p;
        userName = u;
        distric = d;
        divition = div;
        currentPlace = c;
    }
    void setValue2(int ph, int pmn)
    {
        phoneNumber = ph;
        paymentname = pmn;
    }
};
class Titas : public UtilityGass
{
public:
    void displayTitash(void)
    {
        cout << gassName << endl
             << endl;
        cout << "Your name is : " << userName << endl;
        cout << "Your distric is : " << distric << endl;
        cout << "Your Divition is : " << divition << endl;
        cout << "Your current place is : " << currentPlace << endl;
        cout << "Phone Number : " << phoneNumber << endl;
        cout << "Payment Number : " << paymentNumber << endl;
        cout << paymentname << endl;
    }
};
class Universal : public UtilityGass
{
};
class Essence : public UtilityGass
{
};
int main()
{
    Titas hello;
    hello.setValue("er", "we", "er", "erd", "erew", "er");
    hello.setValue2(34, 34);
    hello.displayTitash();
    return 0;
}