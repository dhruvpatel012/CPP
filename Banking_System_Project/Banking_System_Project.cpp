#include <iostream>
using namespace std;

// ================= BASE CLASS =================
class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    virtual ~BankAccount() {}

    int getAccNo()
    {
        return accountNumber;
    }

    virtual void deposit(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid deposit amount!\n";
            return;
        }
        balance += amount;
        cout << "Deposit Successful!\n";
    }

    virtual void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdraw amount!\n";
            return;
        }

        if (amount > balance)
        {
            cout << "Insufficient balance!\n";
            return;
        }

        balance -= amount;
        cout << "Withdrawal Successful!\n";
    }

    virtual void display()
    {
        cout << "\nAccount No: " << accountNumber << endl;
        cout << "Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void calculateInterest()
    {
        cout << "No interest for this account.\n";
    }
};

// ================= SAVINGS =================
class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal)
    {
        interestRate = rate;
    }

    void calculateInterest() override
    {
        double interest = balance * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }
};

// ================= CHECKING =================
class CheckingAccount : public BankAccount
{
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal)
    {
        overdraftLimit = limit;
    }

    void withdraw(double amount) override
    {
        if (amount <= 0)
        {
            cout << "Invalid amount!\n";
            return;
        }

        if (amount > balance + overdraftLimit)
        {
            cout << "Overdraft limit exceeded!\n";
            return;
        }

        balance -= amount;
        cout << "Withdrawal Successful!\n";
    }
};

// ================= FIXED DEPOSIT =================
class FixedDepositAccount : public BankAccount
{
    int term;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t)
        : BankAccount(accNo, name, bal)
    {
        term = t;
    }

    void withdraw(double amount) override
    {
        cout << "Cannot withdraw before maturity!\n";
    }

    void calculateInterest() override
    {
        double rate = 6.5;
        double interest = (balance * rate * term) / (100 * 12);
        cout << "FD Interest: " << interest << endl;
    }
};

// ================= MAIN =================
int main()
{

    BankAccount *accounts[10];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== BANK MENU =====\n\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display All\n";
        cout << "5. Calculate Interest\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // ================= CREATE =================
        if (choice == 1)
        {

            int type, accNo;
            string name;
            double bal;

            cout << "\n1. Savings  2. Checking  3. Fixed Deposit\n";
            cout << "Enter account type: ";
            cin >> type;

            // VALIDATION
            if (type < 1 || type > 3)
            {
                cout << "\nInvalid account type!\n";
                continue;
            }

            cout << "\nEnter Account No: ";
            cin >> accNo;

            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Enter Balance: ";
            cin >> bal;

            if (bal < 0)
            {
                cout << "\nInvalid balance!\n";
                continue;
            }

            if (type == 1)
            {
                double rate;
                cout << "Enter Interest Rate: ";
                cin >> rate;

                if (rate <= 0)
                {
                    cout << "\nInvalid interest rate!\n";
                    continue;
                }

                accounts[count++] = new SavingsAccount(accNo, name, bal, rate);
            }
            else if (type == 2)
            {
                double limit;
                cout << "Enter Overdraft Limit: ";
                cin >> limit;

                if (limit < 0)
                {
                    cout << "\nInvalid overdraft limit!\n";
                    continue;
                }

                accounts[count++] = new CheckingAccount(accNo, name, bal, limit);
            }
            else if (type == 3)
            {
                int term;
                cout << "Enter Term (months): ";
                cin >> term;

                if (term <= 0)
                {
                    cout << "\nInvalid term!\n";
                    continue;
                }

                accounts[count++] = new FixedDepositAccount(accNo, name, bal, term);
            }

            cout << "\nAccount Created Successfully!\n";
        }

        // ================= DEPOSIT =================
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "\nNo accounts exist!\n";
                continue;
            }

            int accNo;
            double amount;

            cout << "\nEnter Account No: ";
            cin >> accNo;

            cout << "Enter Amount: ";
            cin >> amount;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (accounts[i]->getAccNo() == accNo)
                {
                    accounts[i]->deposit(amount);
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nAccount not found!\n";
        }

        // ================= WITHDRAW =================
        else if (choice == 3)
        {
            if (count == 0)
            {
                cout << "\nNo accounts exist!\n";
                continue;
            }

            int accNo;
            double amount;

            cout << "\nEnter Account No: ";
            cin >> accNo;

            cout << "Enter Amount: ";
            cin >> amount;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (accounts[i]->getAccNo() == accNo)
                {
                    accounts[i]->withdraw(amount);
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nAccount not found!\n";
        }

        // ================= DISPLAY =================
        else if (choice == 4)
        {
            if (count == 0)
            {
                cout << "\nNo accounts created yet!\n";
                continue;
            }

            for (int i = 0; i < count; i++)
            {
                cout << "\n---------------------";
                cout << "\nBank Account -> " << (i + 1) << endl;
                accounts[i]->display();
                cout << "\n";
            }
        }

        // ================= INTEREST =================
        else if (choice == 5)
        {
            if (count == 0)
            {
                cout << "\nNo accounts available!\n";
                continue;
            }

            for (int i = 0; i < count; i++)
            {
                cout << "\n------------------------";
                cout << "\nBank Account -> " << (i + 1) << endl;
                accounts[i]->calculateInterest();
                cout << "\n";
            }
        }

        else if (choice == 6){
            cout<<"\nThank You For Using Banking System !!\n";
        }

        else if (choice != 6)
        {
            cout << "\nInvalid menu choice!\n";
        }

    } while (choice != 6);

    return 0;
}