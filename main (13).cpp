#include <iostream>
using namespace std;

// Function to print a welcome message to the console
void printWelcomeMessage() {
    cout << "Welcome to my fabulous payment calculator!" << endl
         << "This program will take a principal amount and a number of payments, and" << endl
         << "return the cost of each payment!" << endl
         << endl;
}

// Function to calculate the cost of each payment
// Takes the principal amount and the number of payments as input
// Returns the cost of each payment (a double)
double calculatePaymentCost(float principal, int payments) {
    // Calculate the cost of each payment
    double paymentCost = static_cast<double>((1.2 * principal) / payments);
    return paymentCost;
}

int main() {
    double payment;   // Unused variable; can be removed

    int payments;
    float principal;

    // Call the function to print the welcome message
    printWelcomeMessage();

    // Call the function to prompt the user for input and calculate the payment cost
    cout << "Please enter a principal amount: ";
    cin >> principal;
    cout << "Please enter a number of payments: ";
    cin >> payments;

    // Calculate and display the cost of each payment
    double paymentCost = calculatePaymentCost(principal, payments);
    cout << "Each payment will cost: " << paymentCost;

    return 0;
}