# Project Euler Problem 4 - Largest Palindrome Product

This repository contains a C++ solution for 
[Project Euler Problem 4](https://projecteuler.net/problem=4). 
The problem involves finding the largest palindrome made from the product of two 
3-digit numbers.

## Problem Description

A palindromic number reads the same both ways. 
For example, the largest palindrome made from the product of two 
2-digit numbers is 9009 (91 × 99). The task is to find the largest 
palindrome made from the product of two 3-digit numbers.

## Solution

The solution provided in this repository explores two different methods 
to solve the problem:

1. **String Reversal Method**: Converts the product of two numbers 
to a string, reverses the string, and then converts it back to an 
integer for comparison. This method leverages the `to_string()` and 
string manipulation functions.

2. **Digit Reversal Method**: Uses modulo and division operations to 
reverse the digits of an integer. It iteratively extracts the last digit of 
the number and builds the reversed number.

Both methods are explained in detail within the source code.

## Usage

To compile and run the solution, you can follow these steps:

1. Make sure you have a C++ compiler installed.
2. Copy the C++ code from `main.cpp` and save it to a file named `main.cpp`.
3. Open a terminal/command prompt and navigate to the directory where `main.cpp` is located.
4. Compile the code using the command: `g++ main.cpp -o palindrome`
5. Run the compiled program: `./palindrome`

The program will calculate and display the largest palindrome made from the product of two 3-digit numbers.

## Contributing

Feel free to contribute improvements or optimizations to the solution.
 If you have any suggestions or find any issues, please open an issue or a 
 pull request.


