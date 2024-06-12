# Assignment 1

This project contains a C++ program that performs various operations on an array.

## Files

- `ArrayFunctions.h`: Header file with function declarations.
- `ArrayFunctions.cpp`: Source file with function definitions.
- `main.cpp`: Main program file with an interactive menu.
- `A1input.txt`: Input file with data to be read into the array.

## Building the Project

### Using MSVC

1. Open a Command Prompt and navigate to the project directory:
    ```sh
    cd C:\Users\asnb4\Documents\GitHub\Assignment_1
    ```

2. Set up the MSVC environment by running:
    ```sh
    "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"
    ```

3. Compile the project:
    ```sh
    cl /EHsc ArrayFunctions.cpp main.cpp
    ```

### Using g++

1. Open a terminal and navigate to the project directory:
    ```sh
    cd /path/to/Assignment_1
    ```

2. Compile the project using `g++`:
    ```sh
    g++ ArrayFunctions.cpp main.cpp -o main
    ```

## Running the Program

1. Ensure `A1input.txt` is in the same directory as the executable.
2. Run the compiled executable:

    ### On Windows (MSVC or g++)
    ```sh
    main.exe
    ```

    ### On macOS/Linux (g++)
    ```sh
    ./main
    ```

3. The program will read data from `A1input.txt` and display an interactive menu.

## Usage

Follow the on-screen prompts to interact with the array.
