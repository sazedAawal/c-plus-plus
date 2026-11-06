# SEE++
---
this repository is based on the courseworks practiced with C++ in Coursera course by Microsoft. The followings will act as the notes on C++

## Basic compilation:

g++ program.cpp -o program

## With warning flags:

g++ -Wall program.cpp -o program

## With additional warnings:

g++ -Wall -Wextra program.cpp -o program

## With debug information:

g++ -Wall -g program.cpp -o program

## Preprocessing stage (see preprocessor output):

g++ -E program.cpp > preprocessed.txt

## Compilation stage (generate assembly code):

g++ -S program.cpp

## Assembly stage (create object file):

g++ -c program.cpp -o program.o

## Linking stage (create executable):

g++ program.o -o program

## No optimization:

g++ program.cpp -o program_O0

## Basic optimization:

g++ -O1 program.cpp -o program_O1

## Standard optimization:

g++ -O2 program.cpp -o program_O2

## Maximum optimization:

g++ -O3 program.cpp -o program_O3

## Optimize for size:

g++ -Os program.cpp -o program_Os

---

## Type casting debugging
- demo.cpp -o demo -Wconversion
- demo.cpp -o demo -Wconversion -Werror

## Core Elements
- Preprocessor
- Headers: #include
- Namespace: std

## Programme Structure
- Preprocessor Directives: #include <iostream>; send instructions to compiler before compilation process begins.

- Main Function: int main() function with return 0; the entry point of any programme, with bug, it will return anything else than 0;

- Output Operation: std::cout << "Hi" ; helps in displaying the string on console.

## Compilation Process

- Preprocessing
- Compilation
- Linking

## Data Types - Memory & Value Ranges
- int: 4 bytes (-2,147,483,648 - 2,147,483,647)
- short: 2 bytes (-32,768 - 32,767)
- long: 4 bytes
- long long: 8 bytes ( -9,223,372,036,854,775,808 - 9,223,372,036,854,775,807)
- float: 4 bytes (~3.4E-38 - ~3.4E+38; with 7 decimal digits)
- double: 8 bytes (~1.7E-308 - ~1.7E+308 with 15 decimal digits)
- long double: Implementation-dependent; 8, 12/16 (~1.7E-308 - ~1.7E+308 with 15 decimal digits of precision/ ~3.4E-4932 - ~1.1E+4832 (when 10 bytes are used))
- char: 1 byte (Signed: -128 - 127 / Unsigned: 0 - 255)
- bool: 1 byte (true/false)

## Pre-Increment (++i) vs. Post-Increment (i++)
- ++i (Pre-increment): Increment first, use second. int i = 5; int a = ++i; // i becomes 6, then 'a' gets 6 (a = 6, i = 6)
- i++ (Post-increment): Use first, increment second. int j = 5; int b = j++; // 'b' gets 5 first, then j becomes 6 (b = 5, j = 6)

---
## Header Guards / Inclusion Guards
- #ifndef (if not defined)
- #define (define it now)
- #endif (end of conditional block)
- Prupose: Prevent multiple inclusion problem.
- Alternative: #pragma once

## Forward Declaration
- Declare function prototype before main() function or in separate header file

## Error Types
- Syntax Errors: These are errors in the structure of the code that prevent it from compiling. The compiler will usually point out these errors with messages.
- Runtime Errors: These occur during program execution and cause the program to crash or behave unpredictably. Examples include division by zero or infinite loops.
- Logical Errors: These don't cause the program to crash but result in incorrect behavior. The program runs but produces wrong outputs or unexpected behavior. These can be the hardest to find because there are no error messages.

## Debuggging Process/Steps
1. Reproduce the Error
2. Identify the Error Type
3. Localize the Error
4. Fix the Error
5. Test the Fix
6. Document what's been fixed