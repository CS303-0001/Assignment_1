#include <iostream>
#include <fstream>
#include <stdexcept>
#include "ArrayFunctions.h"

using namespace std;

ArrayFunctions::ArrayFunctions(int size) : capacity(size), size(0) // Constructor with initial size
{
    array = new int[capacity]; // Dynamically allocate memory for the array
}

ArrayFunctions::~ArrayFunctions() // Destructor
{
    delete[] array; // Deallocate memory for the array
}

void ArrayFunctions::readData(const char *filename)
{
    ifstream inputFile(filename); // Open the input file
    if (!inputFile.is_open())
    {
        throw runtime_error("Error opening file"); // Throw an exception if the file cannot be opened
    }

    int value;
    while (inputFile >> value) // Read integers from the file
    {
        if (size >= capacity) // If the array is full, resize it
        {
            resize();
        }
        array[size++] = value; // Add the value to the array
    }

    inputFile.close(); // Close the input file
}

int ArrayFunctions::checkInteger(int value)
{
    for (int i = 0; i < size; i++) // Iterate through the array
    {
        if (array[i] == value) // If the value is found, return its index
        {
            return i;
        }
    }
    return -1; // If the value is not found, return -1
}

void ArrayFunctions::modifyValue(int index, int newValue)
{
    if (index < 0 || index >= size) // Check if the index is valid
    {
        throw out_of_range("Index out of range"); // Throw an exception if the index is out of range
    }
    int oldValue = array[index];                                              // Store the old value
    array[index] = newValue;                                                  // Modify the value at the specified index
    cout << "Old Value: " << oldValue << ", New Value: " << newValue << endl; // Print the old and new values
}

void ArrayFunctions::addInteger(int value)
{
    if (size >= capacity) // If the array is full, resize it
    {
        resize();
    }
    array[size++] = value; // Add the value to the array
}

void ArrayFunctions::replaceOrRemove(int index, bool replaceWithZero)
{
    if (index < 0 || index >= size) // Check if the index is valid
    {
        throw out_of_range("Index out of range"); // Throw an exception if the index is out of range
    }
    if (replaceWithZero) // If replaceWithZero is true, replace the value with zero
    {
        array[index] = 0;
    }
    else // If replaceWithZero is false, remove the value by shifting the elements to the left
    {
        for (int i = index; i < size - 1; i++)
        {
            array[i] = array[i + 1]; 
        }
        size--; // Decrease the size of the array
    }
}

void ArrayFunctions::printArray() const
{
    for (int i = 0; i < size; i++) // Iterate through the array
    {
        cout << array[i] << " "; // Print each element
    }
    cout << endl; // Print a new line
}

void ArrayFunctions::resize()
{
    capacity *= 2;                     // Double the capacity of the array
    int *newArray = new int[capacity]; // Create a new array with the new capacity
    for (int i = 0; i < size; i++)     // Copy the elements from the old array to the new array
    {
        newArray[i] = array[i];
    }
    delete[] array;   // Deallocate memory for the old array
    array = newArray; // Update the array pointer to point to the new array
}
