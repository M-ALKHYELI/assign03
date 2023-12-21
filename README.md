# Bank Account Management System
## 1. Overview
Welcome to the Bank Account Management System! This C++ program is designed to provide a simple and interactive platform for managing bank accounts. The intended audience for this application includes individuals who want to perform basic banking operations such as creating a new account, depositing money, withdrawing money, and checking their account balance.

Problem Statement
Managing a bank account should be straightforward and user-friendly. This program addresses the need for a simple, console-based application that allows users to perform common banking tasks efficiently.

## 2. Features
- **Create a New Bank Account:**

    - User input: Name and initial balance.
    - Generates a unique account number using srand().
    - Displays account creation success message with account details.
    - Saves account information in an array.
- **Deposit Money:**

    - User input: Account number and deposit amount.
    - Verifies account existence.
    - Adds the deposit to the account balance.
    - Displays deposit confirmation and current balance.
- **Withdraw Money:**

    - User input: Account number and withdrawal amount.
    - Verifies account existence.
    - Subtracts the withdrawal amount from the account balance.
    - Displays withdrawal confirmation and current balance.
- **Display Account Balance:**

    - User input: Account number.
    - Verifies account existence.
    - Displays the current balance of the account.
## 3. How to Run the App
To run the Bank Account Management System on your local machine, follow these steps:

1. Clone the repository to a newly formed folder named `bams`:
```
git clone https://github.com/$USER_NAME/bank-account-management-system.git bams
```

2. Change directory to `verif`:
```
cd verif/
```

3. Build your code:
```
make
```

4. Run the code to see the outputs:
```
./bams
```

Follow On-Screen Instructions:

Use the numeric keys to navigate through the main menu.
Follow the prompts for each operation.
Enjoy Managing Your Bank Account!

Feel free to explore the features and functionalities of the Bank Account Management System. If you encounter any issues or have suggestions for improvements, please don't hesitate to reach out.