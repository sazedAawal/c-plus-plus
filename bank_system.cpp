/*
 * Bank Account System
 * This program simulates a simple banking system with accounts, deposits,
 * withdrawals, interest calculations, and currency conversion.
 * 
 * WARNING: This code contains multiple type conversion issues that need to be fixed!
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
#include <limits>

using namespace std;

// Global constants
#define MAX_ACCOUNTS 100
#define MAX_BALANCE 1000000

// Currency conversion rates (as of a fictional date)
double USD_TO_EUR = 0.85;
double USD_TO_JPY = 110.0;
double EUR_TO_USD = 1.18;
double EUR_TO_JPY = 129.5;
double JPY_TO_USD = 0.0091;
double JPY_TO_EUR = 0.0077;

// Account structure
struct Account {
    int accountNumber;
    string ownerName;
    double balance;
    char accountType;  // 'S' for Savings, 'C' for Checking
};

// Function prototypes
void displayMenu();
bool safeFloatToInt(float floatValue, int& result);
Account createAccount(int accountNum);
void deposit(Account& account, int amount);
bool withdraw(Account& account, int amount);
double calculateInterest(const Account& account, int days);
double convertCurrency(double amount, char fromCurrency, char toCurrency);
void displayAccountSummary(const Account& account);
void testBoundaryConditions();
bool safeAdd(int a, int b, int& result);


// Vector to store accounts
vector<Account> accounts;

int main() {
    cout << "--- BANK ACCOUNT SYSTEM ---" << endl;
    cout << "This program demonstrates a simple banking system." << endl;
    cout << "NOTE: This code contained type conversion issues that has been fixed!" << endl;
    cout << endl;

    int choice;
    int accountCounter = 100; // Starting account number
    
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                // Create a new account
                if (accounts.size() < MAX_ACCOUNTS) {
                    Account newAccount = createAccount(accountCounter++);
                    accounts.push_back(newAccount);
                    cout << "Account created successfully!" << endl;
                    displayAccountSummary(newAccount);
                } else {
                    cout << "Maximum number of accounts reached." << endl;
                }
                break;
            }
            
            case 2: {
                // Deposit money
                int accNum, amount;
                cout << "Enter account number: ";
                cin >> accNum;
                
                bool found = false;
                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == accNum) {
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        deposit(accounts[i], amount);
                        cout << "Deposit successful!" << endl;
                        displayAccountSummary(accounts[i]);
                        found = true;
                        break;
                    }
                }
                
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            
            case 3: {
                // Withdraw money
                int accNum, amount;
                cout << "Enter account number: ";
                cin >> accNum;
                
                bool found = false;
                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == accNum) {
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        if (withdraw(accounts[i], amount)) {
                            cout << "Withdrawal successful!" << endl;
                            displayAccountSummary(accounts[i]);
                        } else {
                            cout << "Insufficient funds or invalid amount." << endl;
                        }
                        found = true;
                        break;
                    }
                }
                
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            
            case 4: {
                // Calculate interest
                int accNum, days;
                cout << "Enter account number: ";
                cin >> accNum;
                
                bool found = false;
                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == accNum) {
                        cout << "Enter number of days: ";
                        cin >> days;
                        
                        double interest = calculateInterest(accounts[i], days);
                        cout << "Interest earned after " << days << " days: $" << interest << endl;
                        cout << "Updated balance with interest: $" << accounts[i].balance + interest << endl;
                        found = true;
                        break;
                    }
                }
                
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            
            case 5: {
                // Convert currency
                int accNum;
                char fromCurr, toCurr;
                cout << "Enter account number: ";
                cin >> accNum;
                
                bool found = false;
                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == accNum) {
                        cout << "Available currencies: U (USD), E (EUR), J (JPY)" << endl;
                        cout << "From currency (U/E/J): ";
                        cin >> fromCurr;
                        cout << "To currency (U/E/J): ";
                        cin >> toCurr;
                        
                        float convertedAmount = convertCurrency(accounts[i].balance, 
                                                              toupper(fromCurr), 
                                                              toupper(toCurr));
                        
                        cout << "Converted amount: ";
                        switch(toupper(toCurr)) {
                            case 'U': cout << "$"; break;
                            case 'E': cout << "€"; break;
                            case 'J': cout << "¥"; break;
                        }
                        cout << convertedAmount << endl;
                        found = true;
                        break;
                    }
                }
                
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            
            case 6: {
                // Display all accounts
                if (accounts.empty()) {
                    cout << "No accounts to display." << endl;
                } else {
                    cout << "\n--- ACCOUNT SUMMARIES ---" << endl;
                    for (const Account& acc : accounts) {
                        displayAccountSummary(acc);
                        cout << "----------------------------" << endl;
                    }
                }
                break;
            }
            
            case 7: {
                // Test boundary conditions
                testBoundaryConditions();
                break;
            }
            
            case 8:
                cout << "Exiting program. Thank you!" << endl;
                break;
                
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        
        cout << endl;
    } while (choice != 8);
    
    return 0;
}

// Function to display the main menu
void displayMenu() {
    cout << "\n--- MENU ---" << endl;
    cout << "1. Create a new account" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Calculate interest" << endl;
    cout << "5. Convert currency" << endl;
    cout << "6. Display all accounts" << endl;
    cout << "7. Test boundary conditions" << endl;
    cout << "8. Exit" << endl;
}

// New function
// Function to convert float to int
bool safeFloatToInt(float floatValue, int& result) {
    // Implementation here:
    // Check if the float value exceeds the maximum or minimum bounds of an integer
    // Explicitly cast limits to float to prevent implicit conversion warnings
    static const float max_int_f = static_cast<float>(numeric_limits<int>::max());
    static const float min_int_f = static_cast<float>(numeric_limits<int>::min());

    if (floatValue > max_int_f || floatValue < min_int_f) {
        return false;
    }
    // Cast to int to check if any fractional part exists
    int temp = static_cast<int>(floatValue);
    if (floatValue != static_cast<float>(temp)) {
        return false; // Fractional part would be lost
    }
    result = temp; // Safe to assign to the output reference
    return true; // Replace with your implementation
}

// New function
// Function to safely add two integers, checking for overflow
bool safeAdd(int a, int b, int& result) {
    // Check for positive overflow
    if (b > 0 && a > std::numeric_limits<int>::max() - b){
        return false; // Overflow would occur
    }
    // Check for negative underflow
    if (b < 0 && a < std::numeric_limits<int>::min() - b) {
        return false; // Underflow would occur
    }
    result = a + b;
    return true;
}

// Function to create a new account
Account createAccount(int accountNum) {
    Account newAccount;
    newAccount.accountNumber = accountNum;
    
    cout << "Enter account owner name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, newAccount.ownerName);
    
    cout << "Enter initial balance: $";
    double initialBalance;
    cin >> initialBalance;
    
    // Convert double to float and then back to double - potential precision loss!
    float tempBalance = initialBalance;
    newAccount.balance = tempBalance;
    
    cout << "Enter account type (S for Savings, C for Checking): ";
    cin >> newAccount.accountType;
    
    return newAccount;
}

// Function to deposit money into an account
void deposit(Account& account, int amount) {
    // Problem: int amount is added to a double balance without explicit conversion
    double double_amount = static_cast<double>(amount); // Resolved: Int is converted to a double
    
    if (double_amount > 0) {
        // Check if deposit exceeds the maximum allowed balance
        if (account.balance > MAX_BALANCE - double_amount){
            cout << "Error: Deposit Failed. Balance would exceed maximum balance. " << endl;
            return;
        }
        account.balance += double_amount; 
    } else {
        cout << "Error: Deposit amount must be positive" << endl;
    }
}

// Function to withdraw money from an account
bool withdraw(Account& account, int amount) {
    // Problem: int amount is subtracted from a double balance without explicit conversion
    double double_amount = static_cast<double>(amount); // Resolved: Int is converted to a double
    if (double_amount > 0 && double_amount <= account.balance) {
        account.balance -= double_amount;
        return true;
    }
    return false;
}

// Function to calculate interest for a given number of days
double calculateInterest(const Account& account, int days) {
    // Interest rates (annual)
    double rate;
    
    if (account.accountType == 'S') {
        rate = 0.03; // 3% for Savings
    } else {
        rate = 0.01; // 1% for Checking
    }
    
    // Problem: days is converted to float in division, potential precision loss
    double dailyRate = rate / 365.0; // Resolved - used doulbe than float
    
    // Problem: mixing double, float and int in calculation
    double interest = account.balance * dailyRate * days;
    
    // Truncate interest to 2 decimal places (cents)
    // int centsInterest = static_cast<int>(interest * 100); // Corrected version
    int centsInterest = 0;
    if (!safeFloatToInt(static_cast<float>(interest * 100), centsInterest)) {
        centsInterest = 0;
    } // Alternate version with new function
    return centsInterest / 100.0;
}

// Function to convert between currencies
// Updated function returning double with validation and full precision
double convertCurrency(double amount, char fromCurrency, char toCurrency) {
    // Step 4: Validate amount and currency codes
    if (amount < 0) {
        cout << "Error: Amount cannot be negative." << endl;
        return 0.0;
    }
    
    if ((fromCurrency != 'U' && fromCurrency != 'E' && fromCurrency != 'J') ||
        (toCurrency != 'U' && toCurrency != 'E' && toCurrency != 'J')) {
        cout << "Error: Invalid currency code." << endl;
        return 0.0;
    }

    double result = amount;
    
    if (fromCurrency == toCurrency) {
        return result;
    }
    
    // Convert from source currency to USD as an intermediate step
    if (fromCurrency == 'E') { // From EUR
        result *= EUR_TO_USD;
    } else if (fromCurrency == 'J') { // From JPY
        result *= JPY_TO_USD;
    }
    
    // Convert from USD to target currency
    if (toCurrency == 'E') { // To EUR
        result *= USD_TO_EUR;
    } else if (toCurrency == 'J') { // To JPY
        result *= USD_TO_JPY;
    }
    
    // Returns double, preserving full precision without truncation
    return result;
}

// Function to display account summary
void displayAccountSummary(const Account& account) {
    cout << "\nAccount Number: " << account.accountNumber << endl;
    cout << "Owner: " << account.ownerName << endl;
    cout << "Type: " << (account.accountType == 'S' ? "Savings" : "Checking") << endl;
    cout << "Balance: $" << fixed << setprecision(2) << account.balance << endl;
}

// Function to test boundary conditions
void testBoundaryConditions() {
    cout << "\n--- TESTING BOUNDARY CONDITIONS ---" << endl;
    
    // Create a test account
    Account testAccount;
    testAccount.accountNumber = 999;
    testAccount.ownerName = "Test Account";
    testAccount.balance = 1000.0;
    testAccount.accountType = 'S';
    
    cout << "Initial test account:" << endl;
    displayAccountSummary(testAccount);
    
    // Test 1: Large deposit
    int largeAmount = 2000000000; // Larger than MAX_BALANCE
    cout << "\nTest 1: Large deposit of $" << largeAmount << endl;
    
    // Problem: This might overflow or exceed MAX_BALANCE
    deposit(testAccount, largeAmount);
    cout << "After large deposit:" << endl;
    displayAccountSummary(testAccount);
    
    // Test 2: Decimal precision
    testAccount.balance = 100.0;
    double rate = 0.03333333; // 3.333333% interest rate
    
    // Problem: Potential precision loss when converting double to float
    float dailyRate = rate / 365;
    
    // Problem: Mixing types in calculation
    double interest = testAccount.balance * dailyRate * 30; // 30 days
    
    cout << "\nTest 2: Decimal precision" << endl;
    cout << "Interest rate: " << rate * 100 << "%" << endl;
    cout << "Daily rate: " << dailyRate << endl;
    cout << "Interest for 30 days: $" << interest << endl;
    
    // Test 3: Currency conversion precision
    double largeBalance = 1000000.0;
    
    // Problem: Converting large double to float for currency conversion - Resolved
    double eurAmount = convertCurrency(largeBalance, 'U', 'E');
    double jpyAmount = convertCurrency(largeBalance, 'U', 'J');
    
    cout << "\nTest 3: Currency conversion precision" << endl;
    cout << "Original amount: $" << largeBalance << endl;
    cout << "Converted to EUR: €" << eurAmount << endl;
    cout << "Converted to JPY: ¥" << jpyAmount << endl;
    
    // Test 4: Integer overflow
    int maxInt = numeric_limits<int>::max();
    int smallInt = 100;
    
    
    // Problem: This will overflow
    //int overflowResult = maxInt + smallInt;
    int overflowResult = 0;
    
    cout << "\nTest 4: Integer overflow" << endl;
    cout << "Maximum integer value: " << maxInt << endl;
    cout << "Small integer to add: " << smallInt << endl;
    if (!safeAdd(maxInt, smallInt, overflowResult)){
        cout << "Error: Integer overflow detected! Operation blocked!" << endl;
    } else {
        cout << "Result of addition: " << overflowResult << endl;
    }
    
}
