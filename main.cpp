#include <iostream>

using namespace std;

/**
 * Get the fibonacci number
 * @param number Integer
 * @returns The fibonacci number to the entered number
 */
int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }

    if (number == 1)
    {
        return 1;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    int number;

    cout << "ENTER THE NUMBER: ";
    cin >> number;
    cout << "THE FIBONACCI NUMBER IS: " << fibonacci(number);
    return 0;
}