#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

class ArrayFunctions
{
public:
    ArrayFunctions(int size); // Constructor
    ~ArrayFunctions();        // Destructor

    /**
     * Reads data from a file.
     *
     * This function reads data from the specified file and performs some operation on it.
     *
     * @param filename The name of the file to read data from.
     */
    void readData(const char *filename);

    /**
     * @brief Checks if the given value is an integer.
     *
     * This function takes a value as input and checks if it is an integer.
     * It returns 1 if the value is an integer, and 0 otherwise.
     *
     * @param value The value to be checked.
     * @return 1 if the value is an integer, 0 otherwise.
     */
    int checkInteger(int value);

    /**
     * Modifies the value at the specified index in the array.
     *
     * @param index The index of the element to modify.
     * @param newValue The new value to assign to the element.
     */

    /**
     * Modifies the value at the specified index in the array.
     *
     * @param index The index of the element to modify.
     * @param newValue The new value to assign to the element.
     */
    void modifyValue(int index, int newValue);

    /**
     * Adds an integer value to the array.
     *
     * @param value The integer value to be added.
     */
    void addInteger(int value);

    /**
     * Replaces the element at the specified index with zero or removes it from the array.
     *
     * @param index The index of the element to replace or remove.
     * @param replaceWithZero If true, the element at the specified index will be replaced with zero.
     *                        If false, the element will be removed from the array.
     */
    void replaceOrRemove(int index, bool replaceWithZero);

    /**
     * Prints the elements of the array.
     */
    void printArray() const;

private:
    int *array;   // Pointer to the array
    int capacity; // Capacity of the array
    int size;     // Size of the array

    /**
     * Resizes the array.
     *
     * This function resizes the array to a new size.
     *
     * @param None
     * @return None
     */
    void resize();
};

#endif
