# Banking Application (C++)

## Description
This is a simple command-line banking application written in C++. It allows users to create an account, set a password, and perform basic banking operations such as deposits, withdrawals, and balance inquiries. A login system with a maximum of three password attempts ensures security.

## Features
- User account creation with name and password.
- Secure login with up to three password attempts.
- Deposit funds into the account.
- Withdraw funds with balance validation.
- Check account balance.
- Exit the system safely.

## How to Use
1. Compile the program using a C++ compiler, e.g., g++:
   ```sh
   g++ banking_app.cpp -o banking_app
   ```
2. Run the compiled program:
   ```sh
   ./banking_app
   ```
3. Follow the on-screen prompts:
   - Enter your name and set a password.
   - Provide an initial deposit amount.
   - Login with your password (3 attempts allowed).
   - Choose options from the menu:
     - Deposit
     - Withdraw
     - Check balance
     - Exit

## Example Run
```
Enter your name: John
Set your password: mypassword
Enter initial deposit amount: 500

Login required. Enter your password: mypassword

1. Deposit
2. Withdraw
3. Check Balance
4. Exit
Choose an option: 3
John's account balance: $500
```

## Requirements
- C++ compiler (e.g., g++)
- Terminal or command prompt

## Future Improvements
- Implement persistent storage (file/database) for account details.
- Add multiple user support.
- Enhance security with password hashing.

## License
This project is open-source and free to use for educational purposes.

## Author
Developed by [Your Name].

