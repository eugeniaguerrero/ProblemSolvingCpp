#include <iostream>
using namespace std;

int main()
{
    int first_number, second_number, total_sum;

    cout << "Hello. ";

    cout << "Press return after entering a number.\n";
    cout << "Enter the first number:\n";
    cin >> first_number;
    cout << "Enter the second number:\n";
    cin >> second_number;

    total_sum = first_number + second_number;

    cout << "If you have ";
    cout << first_number;
    cout << " as a first number\nand ";
    cout << second_number;
    cout << " as a second number, then\n";
    cout << "you have ";
    cout << total_sum;
    cout << " as a total sum.\n";

    cout << "This is the end of the program.\n";

    return 0;
}

