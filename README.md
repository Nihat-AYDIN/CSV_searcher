# CSV Parser Application

Welcome to the CSV Parser application! This simple yet powerful tool allows you to parse CSV files and retrieve specific values based on the provided row and column indices.

## Purpose
The CSV Parser application is designed to streamline the process of extracting data from CSV files. It provides a user-friendly interface for entering the CSV file name and specifying the desired row and column. The application then returns the corresponding value, making it a handy tool for anyone working with structured data stored in CSV format.

## How to Use

### 1. Compilation
To compile the CSV Parser application, use the provided Makefile. Open a terminal and navigate to the project directory. Run the following command:

```bash
make
```

This will compile the source code and generate the executable file named `myreader`.

### 2. Execution
After compilation, run the application by entering the following command:

```bash
./myreader
```

The application will prompt you to enter the name of the CSV file you want to parse. Provide the file name when prompted.

### 3. Retrieving Data
Once the CSV file is specified, the application will ask for the row and column indices of the desired value. Enter the indices as prompted, and the application will display the corresponding value from the CSV file.

## Clean Up
To clean up the compiled files, you can use the following command:

```bash
make clean
```

This will prompt you to confirm the cleaning process. If you confirm by entering 'y', the compiled object files and the executable will be removed.

**Note:** Make sure to save your work before cleaning, as this action is irreversible.

## Dependencies
The CSV Parser application has no external dependencies. It is a standalone C program that can be compiled using the provided Makefile.

Feel free to use and modify this application to suit your needs. Happy parsing!
