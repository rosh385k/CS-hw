#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function prototypes:
int getInput();
int findMax();
int findSum();

int num; // Global Variable, visible to all functions

int getInput() {
    cout << "Enter an integer: ";
    cin >> num;
    return num;
}

int findSum() {
    int sum =0;
    int temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    return sum;
}

int findMax() {
    int max_digit;
    int last_digit;
    int temp = num;

    int a=0;
        while (temp >0){
            last_digit = temp % 10;

            if ( last_digit > a){
                max_digit = last_digit;
                a= max_digit;
            }
            else 
            {
                max_digit = a;
            }
            temp = temp / 10;
        }
          return max_digit;
    }

int main() {
    char choice;
    int sum, max_digit;
    float average;

    do {
        num = getInput();
        cout << "The integer entered by the user is " << num << endl;
        max_digit = findMax();
        
        cout << "Largest Digit: " << max_digit << endl;
        sum = findSum();
        
        cout << "Sum: " << sum << endl;
        cout << "Would you like to Continue: ";
        cin >> choice;
    } while (choice != 'N' && choice != 'n');

    return 0;
    
    

    
}
