# Banking_System
A simple console-based banking system in C++ that allows users to open accounts, check balances, deposit and withdraw money, close accounts, and view all accounts. The system uses a std::map to store account information and provides basic input validation for smooth operation. Ideal for learning object-oriented programming in C++.



# Banking System

A simple banking system project that allows users to create accounts, deposit money, withdraw funds, check balances, close accounts, and view all account information. The system uses basic Object-Oriented Programming (OOP) principles with C++ and the `map` data structure to store and manage account details.

## Features

* Open a new account with initial balance.
* Deposit money into an account.
* Withdraw money from an account.
* Check the balance of an account.
* Close an account.
* View a list of all accounts.

## Requirements

* C++ Compiler (e.g., g++)
* C++ Standard Library

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/banking-system.git
* cd banking-system
* g++ -o banking_system banking_system.cpp
* ./banking_system



## Usage

* Upon running the program, you will be presented with a menu to choose the following options:
  
* Open an Account: Create a new account with a full name and initial balance.
* Balance Enquiry: Check the balance of an account by entering the full name.
* Deposit: Deposit money into an existing account.
* Withdrawal: Withdraw money from an existing account (checks if there is enough balance).
* Close an Account: Close an account by entering the full name.
* Show All Accounts: View a list of all created accounts and their balances.
* Quit: Exit the banking system.


## Example
*** Banking System ***
* Select One Option Below:
* 1 Open an Account
* 2 Balance Enquiry
* 3 Deposit
* 4 Withdrawal
* 5 Close an Account
* 6 Show All Accounts
* 7 Quit
* Enter Your Choice: 1
* Enter Your First Name: John
* Enter Your Last Name: Doe
* Enter Your Initial Balance: 1000
* Congratulations, Account is Created

* First Name: John
* Last Name: Doe
* Balance: 1000
...



## Code Structure

* Account Class: Contains the main functionalities for managing the account such as opening accounts, depositing, withdrawing, and closing accounts.
* Global map: Stores account names and corresponding balances.



## License

* This project is licensed under the MIT License.



## Contributing

* Feel free to fork the repository, create a branch, and submit a pull request with improvements or bug fixes. Make sure to follow standard C++ coding conventions.




