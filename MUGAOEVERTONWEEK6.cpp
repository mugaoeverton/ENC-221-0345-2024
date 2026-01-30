#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int numbers[20];
    int even[20], odd[20];
    int eCount = 0, oCount = 0;

    // Seed random number generator
    srand(time(0));

    // Fill array with numbers between 1 and 100
    for (int i = 0; i < 20; i++)
    {
        numbers[i] = rand() % 100 + 1;

        if (numbers[i] % 2 == 0)
            even[eCount++] = numbers[i];
        else
            odd[oCount++] = numbers[i];
    }

    // Display original array
    cout << "Original array:\n";
    for (int i = 0; i < 20; i++)
        cout << numbers[i] << " ";

    // Display even numbers
    cout << "\n\nEven numbers:\n";
    for (int i = 0; i < eCount; i++)
        cout << even[i] << " ";

    // Display odd numbers
    cout << "\n\nOdd numbers:\n";
    for (int i = 0; i < oCount; i++)
        cout << odd[i] << " ";

    return 0;
}
