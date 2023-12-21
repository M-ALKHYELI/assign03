
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class BankAccount {
    private:
        string name;
        int accountNumber;
        double balance;
    public:
        // Parameterized constructor
        BankAccount(string n, int a, double b) : name(n), accountNumber(a), balance(b) {}

        // Default constructor
        BankAccount() : name(""), accountNumber(0), balance(0.0) {}

        void setName(string n) {
            name = n;
        }
        void setAccountNumber(int a) {
            accountNumber = a;
        }
        void setBalance(double b) {
            balance = b;
        }
        string getName() {
            return name;
        }
        int getAccountNumber() {
            return accountNumber;
        }
        double getBalance() {
            return balance;
        }
};

void display_main_menu(void){
    cout << "Please choose one of the following operations\n" << endl;
    cout << "1- Create a new bank account with an initial balance" << endl;
    cout << "2- Deposit money into an account" << endl;
    cout << "3- Withdraw money from an account" << endl;
    cout << "4- Display the current balance of an account" << endl;
}

void wait_char_press(void){
    while (getchar() != '\n'); // Clear input buffer
    getchar();
}

int main() {
    srand(time(0));
    int choice;
    int accountNumber;
    string name;
    double balance;
    int size = 0;
    BankAccount *accounts = new BankAccount[size];
    cout << "***************Welcome to Chase***************" << endl;
    display_main_menu();
    cin >> choice;
    while (choice != 0) {
        if (choice == 1) {
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your initial balance: ";
            cin >> balance;
            size++;
            BankAccount *temp = new BankAccount[size];
            for (int i = 0; i < size - 1; i++) {
                temp[i] = accounts[i];
            }
            temp[size - 1] = BankAccount(name, rand() % 1000000 + 1, balance);
            delete [] accounts;
            accounts = temp;
            cout << "\nCongratulations " << accounts[size - 1].getName() << "! You have successfully opened your new bank account with an initial balance of $" << accounts[size - 1].getBalance() << "." << " Your account number is " << accounts[size - 1].getAccountNumber() << "." << endl;
            cout << "\n\nPress any key to return to Main Menu!" << endl;
            wait_char_press();
            display_main_menu();
            cin >> choice;
        }
        else if (choice == 2) {
            cout << "Enter your account number: ";
            cin >> accountNumber;
            size++;
            for (int i = 0; i < size; i++) {
                if (accountNumber == accounts[i].getAccountNumber()) {
                    cout << "Enter the balance that you will be depositing: ";
                    cin >> balance;
                    accounts[i].setBalance(accounts[i].getBalance() + balance);
                    cout << "\nCongratulations " << accounts[i].getName() << "! You have successfully deposited the amount of $" << balance << " in your account " << accounts[i].getAccountNumber() << ". Your current balane is $" << accounts[i].getBalance() << endl;
                    cout << "\n\nPress any key to return to Main Menu!" << endl;
                    wait_char_press();
                    display_main_menu();
                    cin >> choice;
                    break;
                }
                else if (i == size - 1) {
                    cout << "Account number does not exist!" << endl;
                    cout << "\n\nPress any key to return to Main Menu!" << endl;
                    wait_char_press();
                    display_main_menu();
                    cin >> choice;
                }
            }
        }
        else if (choice == 3) {
            cout << "Enter your account number: ";
            cin >> accountNumber;
            for (int i = 0; i < size; i++) {
                if (accountNumber == accounts[i].getAccountNumber()) {
                    cout << "Enter the balance that you will be withdrawing: ";
                    cin >> balance;
                    if (balance > accounts[i].getBalance()) {
                        cout << "You do not have enough balance to withdraw! Current balance is $" << accounts[i].getBalance() << "." << endl;
                        cout << "\n\nPress any key to return to Main Menu!" << endl;
                        wait_char_press();
                        display_main_menu();
                        cin >> choice;
                        break;
                    }
                    accounts[i].setBalance(accounts[i].getBalance() - balance);
                    cout << "\nCongratulations " << accounts[i].getName() << "! You have successfully withdrawn the amount of $" << balance << " in your account " << accounts[i].getAccountNumber() << ". Your current balane is $" << accounts[i].getBalance() << endl;
                    cout << "\n\nPress any key to return to Main Menu!" << endl;
                    wait_char_press();
                    display_main_menu();
                    cin >> choice;
                    break;
                }
                else if (i == size - 1) {
                    cout << "Account number does not exist!" << endl;
                    cout << "\n\nPress any key to return to Main Menu!" << endl;
                    wait_char_press();
                    display_main_menu();
                    cin >> choice;
                }
            }
        }
        else if (choice == 4) {
            cout << "Enter your account number: ";
            cin >> accountNumber;
            for (int i = 0; i < size; i++) {
                if (accountNumber == accounts[i].getAccountNumber()) {
                    cout << "Your current balance is $" << accounts[i].getBalance() << "." << endl;
                    cout << "\n\nPress any key to return to Main Menu!" << endl;
                    wait_char_press();
                    display_main_menu();
                    cin >> choice;
                    break;
                }
                else if (i == size - 1) {
                    cout << "No account number exists!" << endl;
                    cout << "\n\nPress any key to return to Main Menu!" << endl;
                    wait_char_press();
                    display_main_menu();
                    cin >> choice;
                }
            }
        }
        else {
            cout << "Invalid input" << endl;
            cout << "\n\nPress any key to return to Main Menu!" << endl;
            wait_char_press();
            display_main_menu();
            cin >> choice;
        }
    }
    delete [] accounts;

    return 0;
}
