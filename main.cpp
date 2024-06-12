#include <iostream>
#include <exception>
#include "ArrayFunctions.h"

using namespace std;

// Function to display the menu options
void displayMenu()
{
    cout << "Menu:" << endl;
    cout << "1. Check if an integer exists in the array" << endl;
    cout << "2. Modify the value of an integer at a specific index" << endl;
    cout << "3. Add a new integer to the end of the array" << endl;
    cout << "4. Replace or remove an integer at a specific index" << endl;
    cout << "5. Print the array" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}

int main()
{
    // Create an instance of ArrayFunctions class with initial size of 10
    ArrayFunctions arrayFunctions(10);

    try
    {
        // Read data from "A1input.txt" file
        arrayFunctions.readData("A1input.txt");
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
        return 1;
    }

    int choice;
    do
    {
        // Display the menu
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int value;
            cout << "Enter the integer to check: ";
            cin >> value;
            // Check if the integer exists in the array
            int index = arrayFunctions.checkInteger(value);
            if (index != -1)
            {
                cout << "Value " << value << " found at index " << index << endl;
            }
            else
            {
                cout << "Value " << value << " not found in the array" << endl;
            }
            break;
        }
        case 2:
        {
            int index, newValue;
            cout << "Enter the index to modify: ";
            cin >> index;
            cout << "Enter the new value: ";
            cin >> newValue;
            try
            {
                // Modify the value at the specified index
                arrayFunctions.modifyValue(index, newValue);
            }
            catch (const exception &e)
            {
                cerr << e.what() << endl;
            }
            break;
        }
        case 3:
        {
            int value;
            cout << "Enter the integer to add: ";
            cin >> value;
            try
            {
                // Add a new integer to the end of the array
                arrayFunctions.addInteger(value);
            }
            catch (const exception &e)
            {
                cerr << e.what() << endl;
            }
            break;
        }
        case 4:
        {
            int index;
            bool replaceWithZero;
            cout << "Enter the index to replace or remove: ";
            cin >> index;
            cout << "Enter 1 to replace with zero, 0 to remove: ";
            cin >> replaceWithZero;
            try
            {
                // Replace or remove the integer at the specified index
                arrayFunctions.replaceOrRemove(index, replaceWithZero);
            }
            catch (const exception &e)
            {
                cerr << e.what() << endl;
            }
            break;
        }
        case 5:
        {
            // Print the array
            arrayFunctions.printArray();
            break;
        }
        case 6:
        {
            cout << "Exiting program." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice. Please try again." << endl;
        }
        }
    } while (choice != 6);

    return 0;
}
