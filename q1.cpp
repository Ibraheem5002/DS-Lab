#include <iostream>
using namespace std;

class BankAccount
{
private:
    double accNum;
    long double Balance;
public:
    BankAccount()
    {
        accNum = 0;
        Balance = 0;
        cout<< accNum << " 's Balance: $" << Balance << endl;
    }

    BankAccount(int N, int B = 1000)
    {
        accNum = N;
        Balance = B;
        cout<< accNum << " 's Balance: $" << Balance << endl; 
    }

    BankAccount(BankAccount &obj)
    {
        this->accNum = obj.accNum;
        this->Balance = obj.Balance;
        this->Balance -= 200;
        cout<< accNum << " 's Balance: $" << Balance << endl;
    }

    void displayBalance()
    {
        cout<< accNum << " 's Balance: $" << Balance << endl;
    }
};

int main()
{
    cout << "Account1" << endl;
    BankAccount account1;
    cout << "Account2" << endl;
    BankAccount account2(696969,696969);
    cout << "Account3" << endl;
    BankAccount account3(account2);
    cout << "Account2" << endl;
    account2.displayBalance();
}