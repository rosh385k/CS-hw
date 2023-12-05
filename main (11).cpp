#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int number;
   int sum;
   char choice;

   // TODO: Compute the sum of digits and
   // the factorial of the highest digit:

   // Loop to continue the process based on user input
   do {
      cout << "Enter a number (100 - 100000)" << endl;
      cin >> number;

      // Check for invalid input range
      if (number < 100 && number > 100000) {
         cout << "Invalid input." << endl;
      }
      else {
         int sum = 0;

         int HighestDigit = 0;
         int temp = number;

         // Loop to calculate sum and find the highest digit
         while (temp != 0) {
            int digit = temp % 10;
            sum += digit;

            // Update HighestDigit if the current digit is greater
            if (digit > HighestDigit)
               HighestDigit = digit;

            temp /= 10;
         }

         // Output sum of digits
         cout << "Sum of digits: " << sum << endl;

         int factorial = 1;

         // Loop to calculate factorial of the HighestDigit
         for (int i = 1; i <= HighestDigit; ++i) {
            factorial *= i;
         }

         // Output factorial and highest digit
         cout << "Factorial of the Highest digit: " << factorial << endl;
         cout << "Highest Digit: " << HighestDigit << endl;

         // Prompt for continuation
         cout << "Do you want to continue? (y/n): " << endl;
         cin >> choice;
      }
   } while (choice == 'y' || choice == 'Y');

   cout << "Have a great day!!!" << endl;

   return 0;
}