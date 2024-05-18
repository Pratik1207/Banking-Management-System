# Banking Management System

This is a simple Banking Management System implemented in C++. The system allows users to create new accounts, view customer lists, update account information, check account details, perform transactions, and remove accounts.

## Features

- Create new account
- View customer list
- Update information of existing accounts
- Check details of existing accounts
- Perform transactions (deposit and withdraw)
- Remove existing accounts

## Getting Started

### Prerequisites

To compile and run this project, you need to have a C++ compiler installed on your system. For example, you can use `g++` which is part of the GNU Compiler Collection (GCC).

### Compilation

1. Clone the repository:
    ```sh
    git clone https://github.com/Pratik1207/Banking-Management-System.git
    cd Banking-Management-System
    ```

2. Compile the code:
    ```sh
    g++ main.cpp -o bank
    ```

### Running the Application

1. Run the compiled executable:
    ```sh
    ./bank
    ```

2. Follow the on-screen instructions to interact with the banking system.

## Code Overview

### Classes and Methods

- `Bank` Class: Main class that handles all banking operations.
  - `void choice()`: Displays the menu and handles user input for different operations.
  - `void personData()`: Collects and stores data for a new person.
  - `void show()`: Displays the list of all customers.
  - `void update()`: Updates information of an existing account.
  - `void search()`: Searches for an account by ID and displays its details.
  - `void transaction()`: Handles deposit and withdrawal transactions.
  - `void del()`: Deletes an account or all accounts.

### File Structure

- `main.cpp`: Contains the implementation of the Banking Management System.

## Example Usage

Upon running the application, you will be presented with a menu:
Press the below number to perform the following operation:

Create new Account
View customer list
Update information of existing account
Check the details of existing account
For Transaction
Remove existing account
Exit

Now choose the following to perform your operations.
