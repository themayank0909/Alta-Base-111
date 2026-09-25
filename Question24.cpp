#include <iostream>
#include <cmath>

using namespace std;

// Function to display the main menu options
void displayMenu() {
    cout << "\n====================================\n";
    cout << "           MENU-DRIVEN PROGRAM       \n";
    cout << "====================================\n";
    cout << "1. Check Prime Number\n";
    cout << "2. Check Palindrome Number\n";
    cout << "3. Calculate Factorial\n";
    cout << "4. Generate Fibonacci Series\n";
    cout << "5. Exit\n";
    cout << "====================================\n";
    cout << "Enter your choice (1-5): ";
}

// Function 1: Check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function 2: Check if a number is a palindrome
bool isPalindrome(int n) {
    if (n < 0) return false; // Negative numbers are generally not palindromes
    int original = n;
    long long reversed = 0;
    
    while (n > 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return original == reversed;
}

// Function 3: Calculate factorial of a number
long long calculateFactorial(int n) {
    if (n < 0) return -1; // Edge case: Factorial of negative number does not exist
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function 4: Print Fibonacci series up to N terms
void printFibonacci(int terms) {
    if (terms <= 0) {
        cout << "Number of terms must be greater than 0.\n";
        return;
    }
    
    long long first = 0, second = 1;
    cout << "Fibonacci Series: ";
    
    for (int i = 1; i <= terms; ++i) {
        cout << first << (i == terms ? "" : ", ");
        long long next = first + second;
        first = second;
        second = next;
    }
    cout << "\n";
}

int main() {
    int choice;
    
    do {
        displayMenu();
        if (!(cin >> choice)) {
            // Handle non-integer input gracefully
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                int num;
                cout << "Enter a number to check for prime: ";
                cin >> num;
                if (isPrime(num)) {
                    cout << num << " is a PRIME number.\n";
                } else {
                    cout << num << " is NOT a prime number.\n";
                }
                break;
            }
            case 2: {
                int num;
                cout << "Enter a number to check for palindrome: ";
                cin >> num;
                if (isPalindrome(num)) {
                    cout << num << " is a PALINDROME.\n";
                } else {
                    cout << num << " is NOT a palindrome.\n";
                }
                break;
            }
            case 3: {
                int num;
                cout << "Enter a number to calculate factorial: ";
                cin >> num;
                if (num > 20) {
                    cout << "Value too large! Overflow may occur.\n";
                } else {
                    long long fact = calculateFactorial(num);
                    if (fact == -1) {
                        cout << "Factorial is not defined for negative numbers.\n";
                    } else {
                        cout << "Factorial of " << num << " = " << fact << "\n";
                    }
                }
                break;
            }
            case 4: {
                int terms;
                cout << "Enter the number of terms for Fibonacci series: ";
                cin >> terms;
                printFibonacci(terms);
                break;
            }
            case 5:
                cout << "Exiting the program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please select an option between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
