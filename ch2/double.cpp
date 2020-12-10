#include "../std_lib_facilties.h"

int main()
{
    double userInput;

    cout<< "Enter a floating point number: ";
    cin >> userInput;
    cout<< "You entered: " << userInput << "\n"
        << "Squared value: " << userInput*userInput << "\n"
        << "Twice: " << userInput * 2 << "\n"
        << "Square root: " << sqrt(userInput)
        << endl;

    return 0;
}