#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, converted;
    
    // Currency exchange rates 
    double USD_TO_INR = 83.0;
    double EUR_TO_INR = 90.5;
    double GBP_TO_INR = 106.2;

    cout << "------ Currency Converter ------\n";
    cout << "Choose conversion option:\n";
    cout << "1. INR to USD\n";
    cout << "2. INR to EUR\n";
    cout << "3. INR to GBP\n";
    cout << "4. USD to INR\n";
    cout << "5. EUR to INR\n";
    cout << "6. GBP to INR\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the amount: ";
    cin >> amount;

    switch (choice) {
        case 1:
            converted = amount / USD_TO_INR;
            cout << "INR " << amount << " = USD " << converted << endl;
            break;
        case 2:
            converted = amount / EUR_TO_INR;
            cout << "INR " << amount << " = EUR " << converted << endl;
            break;
        case 3:
            converted = amount / GBP_TO_INR;
            cout << "INR " << amount << " = GBP " << converted << endl;
            break;
        case 4:
            converted = amount * USD_TO_INR;
            cout << "USD " << amount << " = INR " << converted << endl;
            break;
        case 5:
            converted = amount * EUR_TO_INR;
            cout << "EUR " << amount << " = INR " << converted << endl;
            break;
        case 6:
            converted = amount * GBP_TO_INR;
            cout << "GBP " << amount << " = INR " << converted << endl;
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 6." << endl;
    }

    return 0;
}
