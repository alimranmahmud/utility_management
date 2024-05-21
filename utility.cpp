#include <iostream>
#include <tuple>
#include <fstream>

using namespace std;
// file create
ofstream objFile("file.txt");

// Utility Gass Code :
tuple<string, string, string, string, string, int, int, int> foo()
{
    string userName, distric, divition, currentPlace, paymentname;
    int phoneNumber, paymentNumber, pay, taka;
    cout << "Enter your name : ";
    cin >> userName;
    cout << " Distric : ";
    cin >> distric;
    cout << "Divition : ";
    cin >> divition;
    cout << "current Place : ";
    cin >> currentPlace;
    cout << "Please select your payment method : " << endl;
    cout << "1. Bikash." << endl
         << "2. Nogod." << endl
         << "3. Rocket" << endl;
    cin >> pay;
    cout << "Enter your amount : ";
    cin >> taka;
    if (pay == 1)
    {
        paymentname = "Bikash";
    }
    else if (pay == 2)
    {
        paymentname = "Nogod";
    }
    else
    {
        paymentname = "Rocket";
    }
    cout << "Enter your phone number : ";
    cin >> phoneNumber;
    cout << "Payment " << paymentname << " Number : ";
    cin >> paymentNumber;

    return {userName, distric, divition, currentPlace, paymentname, phoneNumber, paymentNumber, taka};
}
class UtilityGass
{
public:
    string gassName, paymentname, userName, distric, divition, currentPlace;
    int phoneNumber, paymentNumber, transitionId, taka;
    void setValue(string gasName, string u, string d, string div, string c, string p, int t)
    {

        userName = u;
        distric = d;
        divition = div;
        gassName = gasName;
        paymentname = p;

        currentPlace = c;
        taka = t;
    }
    void setValue2(int ph, int pmn)
    {
        phoneNumber = ph;
        paymentNumber = pmn;
    }
};
class Gsss : public UtilityGass
{
public:
    void displayTitash(void)
    {
        cout << endl
             << "***************************************************************" << endl
             << endl;
        cout << gassName << endl
             << endl;
        cout << "Your name is : " << userName << endl;
        cout << "Your distric is : " << distric << endl;
        cout << "Your Divition is : " << divition << endl;
        cout << "Your current place is : " << currentPlace << endl;
        cout << paymentname << endl;
        cout << "Your amount: ";

        cout << "Phone Number : " << phoneNumber << endl;
        cout << "Payment Number : " << paymentNumber << endl
             << endl;
        cout << endl
             << "***************************************************************" << endl;

        // file
        objFile << gassName << endl
                << endl;
        objFile << "Your name is : " << userName << endl;
        objFile << "Your distric is : " << distric << endl;
        objFile << "Your Divition is : " << divition << endl;
        objFile << "Your current place is : " << currentPlace << endl;
        objFile << paymentname << endl;
        objFile << "Phone Number : " << phoneNumber << endl;
        objFile << "Payment Number : " << paymentNumber << endl;
    }
};

// Water Bill Code:
tuple<string, string, string, string, string, int, int, int, int, int> foo2()
{
    string userName, distric, divition, currentPlace, paymentname;
    int bill_no, account_no, amount, payment_number;
    int phoneNumber, paymentNumber, pay;
    cout << "Enter your name : ";
    cin >> userName;
    cout << " Distric : ";
    cin >> distric;
    cout << "Divition : ";
    cin >> divition;
    cout << "current Place : ";
    cin >> currentPlace;
    cout << "Please select your payment method : " << endl;
    cout << "1. Bikash." << endl
         << "2. Nogod." << endl
         << "3. Rocket" << endl;
    cin >> pay;
    if (pay == 1)
    {
        paymentname = "Bikash";
    }
    else if (pay == 2)
    {
        paymentname = "Nogod";
    }
    else
    {
        paymentname = "Rocket";
    }
    cout << "Enter your phone number : ";
    cin >> phoneNumber;
    cout << "Payment " << paymentname << " Number : ";
    cin >> paymentNumber;
    cout << "Your WASA Bill No : ";
    cin >> bill_no;
    cout << "Your WASA Account No : ";
    cin >> account_no;

    cout << "amount : ";
    cin >> amount;

    return {userName, distric, divition, currentPlace, paymentname, phoneNumber, paymentNumber, bill_no, account_no, amount};
}
class WaterBillBase
{
public:
    string userName, distric, divition, currentPlace, paymentname;
    int phoneNumber, paymentNumber, bill_no, account_no, amount;
    void setWaterBill(string userName, string distric, string divition, string currentPlace, string paymentname, int phoneNumber, int paymentNumber, int bill_no, int account_no, int amount)
    {
        this->userName = userName;
        this->distric = distric;
        this->divition = divition;
        this->currentPlace = currentPlace;
        this->paymentname = paymentname;
        this->paymentNumber = paymentNumber;
        this->bill_no = bill_no;
        this->account_no = account_no;
        this->amount = amount;
    }
};
class WaterBill : public WaterBillBase
{
public:
    void displayWaterBill(void)
    {
        cout << endl
             << "***************************************************************" << endl
             << endl;
        cout << "Your name is : " << userName << endl;
        cout << "Your distric is : " << distric << endl;
        cout << "Your Divition is : " << divition << endl;
        cout << "Your current place is : " << currentPlace << endl;
        cout << paymentname << endl;
        cout << "Phone Number : " << phoneNumber << endl;
        cout << "Payment Number : " << paymentNumber << endl;
        cout << " WASA Bill No : " << bill_no << endl;
        cout << "WASA Account No : " << account_no << endl;
        cout << "Pay : " << amount << endl;
        cout << endl
             << "***************************************************************" << endl;
        // file
        objFile << "Your name is : " << userName << endl;
        objFile << "Your distric is : " << distric << endl;
        objFile << "Your Divition is : " << divition << endl;
        objFile << "Your current place is : " << currentPlace << endl;
        objFile << paymentname << endl;
        objFile << "Phone Number : " << phoneNumber << endl;
        objFile << "Payment Number : " << paymentNumber << endl;
        objFile << " WASA Bill No : " << bill_no << endl;
        objFile << "WASA Account No : " << account_no << endl;
        objFile << "Pay : " << amount << endl;
    }
};

// Current Bill Code:
tuple<string, string, string, string, string, int, int, int, int> foo3()
{
    string userName, distric, divition, currentPlace, paymentname;
    int phoneNumber, paymentNumber, meter_number, amount, pay;
    cout << "Enter your name : ";
    cin >> userName;
    cout << " Distric : ";
    cin >> distric;
    cout << "Divition : ";
    cin >> divition;
    cout << "current Place : ";
    cin >> currentPlace;
    cout << "Please select your payment method : " << endl;
    cout << "1. Bikash." << endl
         << "2. Nogod." << endl
         << "3. Rocket" << endl;
    cin >> pay;
    if (pay == 1)
    {
        paymentname = "Bikash";
    }
    else if (pay == 2)
    {
        paymentname = "Nogod";
    }
    else
    {
        paymentname = "Rocket";
    }
    cout << "Enter your phone number : ";
    cin >> phoneNumber;
    cout << "Payment " << paymentname << " Number : ";
    cin >> paymentNumber;
    cout << "Enter the meter number : ";
    cin >> meter_number;
    cout << "Enter the amount : ";
    cin >> amount;

    return {userName, distric, divition, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount};
}
class currentBillBase
{
public:
    string currentName, userName, district, divition, currentPlace, paymentname;
    int phoneNumber, paymentNumber, meter_number, amount, pay;
    void setCurrentBill(string currentName, string userName, string distric, string divition, string currentPlace, string paymentname, int phoneNumber, int paymentNumber, int meter_number, int amount)
    {
        this->currentName = currentName;
        this->userName = userName;
        this->district = district;
        this->divition = divition;
        this->currentPlace = currentPlace;
        this->paymentname = paymentname;
        this->phoneNumber = phoneNumber;
        this->paymentNumber = paymentNumber;
        this->meter_number = meter_number;
        this->amount = amount;
    }
};
class currentBill : public currentBillBase
{
public:
    void displayCurrent(void)
    {
        cout << endl
             << "***************************************************************" << endl
             << endl;
        cout << currentName << endl;
        cout << "Your name is : " << userName << endl;
        cout << "Your distric is : " << district << endl;
        cout << "Your Divition is : " << divition << endl;
        cout << "Your current place is : " << currentPlace << endl;
        cout << paymentname << endl;
        cout << "Phone Number : " << phoneNumber << endl;
        cout << "Payment Number : " << paymentNumber << endl;
        cout << "meter number is : " << meter_number << endl;

        cout << "Pay : " << amount << endl;
        cout << endl
             << "***************************************************************" << endl;
        // fileAdd

        objFile << currentName << endl;
        objFile << "Your name is : " << userName << endl;
        objFile << "Your distric is : " << district << endl;
        objFile << "Your Divition is : " << divition << endl;
        objFile << "Your current place is : " << currentPlace << endl;
        objFile << paymentname << endl;
        objFile << "Phone Number : " << phoneNumber << endl;
        objFile << "Payment Number : " << paymentNumber << endl;
        objFile << "meter number is : " << meter_number << endl;

        objFile << "Pay : " << amount << endl;
    }
};

// Wifi Bill Code:
tuple<string, string, string, int, int, int> foo4()
{
    string userName, subscriberId, paymentname;
    int paymentNumber, phoneNumber, amount, pay;
    cout << "Enter Your Name : " << userName << endl;
    cin >> userName;
    cout << "Please select your payment method : " << endl;
    cout << "1. Bikash." << endl
         << "2. Nogod." << endl
         << "3. Rocket" << endl;
    cin >> pay;
    if (pay == 1)
    {
        paymentname = "Bikash";
    }
    else if (pay == 2)
    {
        paymentname = "Nogod";
    }
    else
    {
        paymentname = "Rocket";
    }
    cout << "subscriber id : ";
    cin >> subscriberId;
    cout << "Enter Your Contact Number : ";
    cin >> phoneNumber;
    cout << "Enter Your payment Number : ";
    cin >> paymentNumber;
    cout << "Enter Amount : ";
    cin >> amount;
    return {userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount};
}
class WifiBillBase
{
public:
    string userName, paymentname, subscriberId, wifiName;
    int phoneNumber, amount, paymentNumber;
    WifiBillBase(string wifiName, string userName, string paymentname, string subscriberId, int paymentNumber, int phoneNumber, int amount)
    {
        this->wifiName = wifiName;
        this->userName = userName;
        this->paymentname = paymentname;
        this->phoneNumber = paymentNumber;
        this->subscriberId = subscriberId;
        this->phoneNumber = phoneNumber;
        this->amount = amount;
    }
    void display(void)
    {
        cout << endl
             << "***************************************************************" << endl
             << endl;
        cout << wifiName << endl;
        cout << "Name : " << userName << endl;
        cout << "Cotact Number : " << phoneNumber << endl;
        cout << paymentname << " Number : " << paymentNumber << endl;
        cout << "subscriber ID : " << subscriberId << endl;
        cout << "Bill Pay : " << amount << endl;
        cout << endl
             << "***************************************************************" << endl;
        // file
        objFile << wifiName << endl;
        objFile << "Name : " << userName << endl;
        objFile << "Cotact Number : " << phoneNumber << endl;
        objFile << paymentname << " Number : " << paymentNumber << endl;
        objFile << "subscriber ID : " << subscriberId << endl;
        objFile << "Bill Pay : " << amount << endl;
    }
};

int main()

{
    int gassBillPay;
    int num, billPay, gas_bill, pay_mehtod_name, BidyutSelect, waterSelect, currentSelect, wifiSelect;
    int phoneNumber, paymentSelect;
    cout << endl
         << endl
         << endl
         << "                      $$$ --------------- Do you want to make a bill payment? ----------------- $$$ yes or no " << endl;
    cout << "1.Yes" << endl;
    cout << "2.No" << endl;
    cin >> num;

    if (num == 1)
    {
        cout << endl
             << endl
             << endl
             << "                    $$$   -------------- U_T_I_L_I_T_Y........M_A_N_A_G_E_M_E_N_T --------------   $$$  " << endl;

        // bill Mehtod

        cout << endl
             << endl
             << endl
             << "1 .Gas Bill - $ " << endl;
        cout << "2. Water Bill - $ " << endl;
        cout << "3 .Current Bill - $ " << endl;
        cout << "4. Wifi Bill - $ " << endl;
        cout << endl
             << endl;
        cin >> billPay;
        if (billPay == 1)
        {
            cout << "1. TITAS GAS LIMITED - $ " << endl;
            cout << "2. UNIVERSAL GAS LIMITED - $ " << endl;
            cout << "3. ESSENCE INDUSTRIAL GASES LIMITED - $ " << endl;
            cin >> gassBillPay;
            if (gassBillPay == 1)
            {
                auto [a, b, c, d, e, f, g, h] = foo();
                Gsss T;
                T.setValue("TITAS GASS", a, b, c, d, e, h);
                T.setValue2(f, g);
                T.displayTitash();
            }
            else if (gassBillPay == 2)
            {
                auto [a, b, c, d, e, f, g, h] = foo();
                Gsss T;
                T.setValue(" UNIVERSAL GAS", a, b, c, d, e, h);
                T.setValue2(f, g);
                T.displayTitash();
            }
            else if (gassBillPay == 3)
            {
                auto [a, b, c, d, e, f, g, h] = foo();
                Gsss T;
                T.setValue(" ESSENCE INDUSTRIAL GASES ", a, b, c, d, e, h);
                T.setValue2(f, g);
                T.displayTitash();
            }
        }
        else if (billPay == 2)
        {
            cout << "1.Dhaka Wasa" << endl;
            cin >> waterSelect;
            if (waterSelect == 1)
            {
                auto [a, b, c, d, e, f, g, h, i, j] = foo2();
                WaterBill water;
                water.setWaterBill(a, b, c, d, e, f, g, h, i, j);
                water.displayWaterBill();
            }
        }
        else if (billPay == 3)
        {
            cout << "1.Palli Bidyut" << endl;
            cout << "2.Nesco" << endl;
            cout << "3.DPDC" << endl;
            cout << "4.BPDB" << endl;
            cin >> currentSelect;
            if (currentSelect == 1)
            {
                auto [a, b, c, d, e, f, g, h, i] = foo3();
                currentBill current;
                current.setCurrentBill("Palli Bidyut", a, b, c, d, e, f, g, h, i);
                current.displayCurrent();
            }
            else if (currentSelect == 2)
            {
                auto [a, b, c, d, e, f, g, h, i] = foo3();
                currentBill current;
                current.setCurrentBill("Nesco", a, b, c, d, e, f, g, h, i);
                current.displayCurrent();
            }
            else if (currentSelect == 3)
            {
                auto [a, b, c, d, e, f, g, h, i] = foo3();
                currentBill current;
                current.setCurrentBill("BPDB", a, b, c, d, e, f, g, h, i);
                current.displayCurrent();
            }
            else
            {
                auto [a, b, c, d, e, f, g, h, i] = foo3();
                currentBill current;
                current.setCurrentBill("Palli Bidyut", a, b, c, d, e, f, g, h, i);
                current.displayCurrent();
            }
        }
        else if (billPay == 4)
        {
            cout << "Wifi Bill" << endl
                 << endl;
            cout << "1.Link3" << endl;
            cout << "2.Carnival" << endl;
            cout << "3.SamOnline" << endl;
            cout << "4.Circle Network" << endl;
            cin >> wifiSelect;
            if (wifiSelect == 1)
            {
                auto [a, b, c, d, e, f] = foo4();
                WifiBillBase wifi("Link3", a, b, c, d, e, f);
                wifi.display();
            }
            else if (wifiSelect == 2)
            {
                auto [a, b, c, d, e, f] = foo4();
                WifiBillBase wifi("Carnival", a, b, c, d, e, f);
                wifi.display();
            }
            else if (wifiSelect == 3)
            {
                auto [a, b, c, d, e, f] = foo4();
                WifiBillBase wifi("SamOnline", a, b, c, d, e, f);
                wifi.display();
            }
            else if (wifiSelect == 4)
            {
                auto [a, b, c, d, e, f] = foo4();
                WifiBillBase wifi("Circle Network", a, b, c, d, e, f);
                wifi.display();
            }
        }
    }

    return 0;
}