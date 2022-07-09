#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class bank
{
    char name[100], father[100], addr[100], type[10];
    float balance;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account()
{
    cout << "\nEnter Your Full Name:" << endl;
    cin.ignore();
    cin.getline(name, 100);
    cout << "\nEnter Your Father Name:\n"
         << endl;
    cin.ignore();
    cin.getline(father, 100);
    cout << "\nEnter Your Address:" << endl;
    cin.ignore();
    cin.getline(addr, 100);
    cout << "\nType of Account You Want to Open Saving(S) or Current(c):" << endl;
    cin.ignore();
    cin.getline(type, 100);
    cout << "\nEnter Your first Deposit Amount:" << endl;
    cin >> balance;

    cout << "\nYour Account is Created Successfully !" << endl;
}

void bank::deposit_money()
{
    int d;
    cout << "\nEnter Amount You Want to Deposit:" << endl;
    cin >> d;
    balance += d;
    cout << "\nTotal balance is:  " << balance << endl;
}

void bank::display_account()
{
    cout << "\nYour Full Name:\t" << name << endl;
    cout << "\nYour Fathers Name:\t" << father << endl;
    cout << "\nYour Address:\t" << addr << endl;
    cout << "\nYour Account Type:\t" << type << endl;
    cout << "\nCurrent or total Amount:\t" << balance << endl;
}

void bank::withdraw_money()
{
    float w;
    cout << "\nEnter Amount You Want to Withdraw:" << endl;
    cin >> w;
    balance -= w;
    cout << "\nCurrent Balance is:  " << balance << endl;
}

int main()
{
    cout << "\n<<------------------Softakers Bank Wellcomes You !------------------>>\n"
         << endl;

    bank obj1;
    int ch;
    char option;

    do
    {
        cout << "\n1) Open Account:" << endl;
        cout << "\n2) Deposit Money:" << endl;
        cout << "\n3) Withdraw Money:" << endl;
        cout << "\n4) Display Account:" << endl;
        cout << "\n5) Exit-->" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\n1) Open Account:";
            obj1.open_account();
            break;

        case 2:
            cout << "\n2) Deposit Money:";
            obj1.deposit_money();
            break;

        case 3:
            cout << "\n3) Withdraw Money:";
            obj1.withdraw_money();
            break;

        case 4:
            cout << "\n4) Display Account:";
            obj1.display_account();
            break;

        case 5:
            if (ch == 5)
            {
                exit(1);
            }

        default:
            cout << "\nPlease try again and chouse Correct Option";
            break;
        }

        // an option to perform banking operations again
        cout << "\nDo You Want to Continue Banking Without Exit? Y/N " << endl;
        option = getch();

        if (option == 'n' || option == 'N')
        {
            exit(1);
        }

    } while (option == 'y' || option == 'Y');

    getch();
    return 0;
}