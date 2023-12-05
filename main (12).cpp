#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes:
bool isValidHours(int);
float calcPay(int, float);
float calcAveragePay(float, int);

int main()
{
    // Declare variables
    int num_employees, hours;
    float total_pay = 0, pay_rate, avg_pay, pay;

    // Get the number of employees
    cout << "Enter the number of employees: ";
    cin >> num_employees;

    // Validate input for the number of employees
    while (num_employees < 1)
    {
        cout << "ERROR: Number of Employees must be at least 1." << endl
             << "Enter the number of employees: ";
        cin >> num_employees;
    }

    cout << fixed << setprecision(2); // Set precision for floating-point output

    // Loop to input hours and pay rate for each employee
    for (int i = 1; i <= num_employees; i++)
    {
        // Get hours worked by the current employee
        cout << "\n\nEnter number of hours worked by Employee " << i << ": ";
        cin >> hours;

        // Validate input for hours worked
        while (!isValidHours(hours)) // Function Call
        {
            cout << "ERROR: Hours must be between 1 and 40." << endl
                 << "Enter number of hours worked by Employee " << i << ": ";
            cin >> hours;
        }

        // Get pay rate for the current employee
        cout << "Enter the pay rate for Employee " << i << ": ";
        cin >> pay_rate;

        pay = calcPay(hours, pay_rate); // Function Call

        total_pay += pay; // Accumulate total pay

        // Output weekly salary for the current employee
        cout << "\nWeekly Salary of Employee " << i << ": $" << pay << endl;
    }

    avg_pay = calcAveragePay(total_pay, num_employees); // Function Call

    // Output average weekly salary for the company
    cout << "\n\nThe Average Weekly Salary for the Company is $" << avg_pay;

    return 0;
}

// Function to check if the entered hours are valid (between 1 and 40)
bool isValidHours(int hours)
{
    return (hours >= 1 && hours <= 40);
}

// Function to calculate weekly pay based on hours and pay rate
float calcPay(int hours, float payRate)
{
    return hours * payRate;
}

// Function to calculate the average weekly pay for the company
float calcAveragePay(float totalPay, int numEmployees)
{
    if (numEmployees == 0)
    {
        return 0; // Avoid division by zero
    }
    return totalPay / numEmployees;
}