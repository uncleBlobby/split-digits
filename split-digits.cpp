#include <iostream>
#include <string>

using namespace std;

int retryUserInput();

int main()
{
    // Program introduction
    cout << endl;
    cout << "                          Split Digits" << endl;
    cout << "***************************************************************" << endl;
    cout << endl;
    cout << "This program will accept a 4 digit integer and display it back" << endl;
    cout << "to the user in reverse order." << endl;

    // Prompt for user input
    int input;
    cout << endl;
    cout << "Please enter a four-digit integer: ";
    cin >> input;
    cout << endl;
    // Convert integer input to string for manipulation
    string intString = to_string(input);

    // If input has any other than 4 digits, prompt to re-try
    while(intString.length() != 4)
            {
                input = retryUserInput();
                intString = to_string(input);
            }
    
    // Initialize output string to hold reversed digits
    string outString = "    ";
    
    // Loop through input and position each digit in reverse order
    for(int i = 0; i < intString.length(); i++)
    {
        outString[i] = intString[intString.length() - 1 - i];
    }

    // Output reversed input to user.
    cout << input << " in reverse order is: " << outString;
    cout << endl;
    cout << endl;

    // End program
    return 0;

}

// Function definition to retry user input
int retryUserInput()
{
    int input;
    cout << "That is not a valid input. Try again." << endl;
    cout << "Please enter a four-digit integer: ";
    cin >> input;
    return input;
}