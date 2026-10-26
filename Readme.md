# To Execute a Programme using Compiler like G++
- Compile the Code:
g++ world.cpp -o world

- Execute the Program:
./world

# Core Elements
- Preprocessor
- Headers: #include
- Namespace: std

# Programme Structure
- Preprocessor Directives: #include <iostream>; send instructions to compiler before compilation process begins.

- Main Function: int main() function with return 0; the entry point of any programme, with bug, it will return anything else than 0;

- Output Operation: std::cout << "Hi" ; helps in displaying the string on console.

# Compilation Process

- Preprocessing
- Compilation
- Linking

# Data Types - Memory & Value Ranges
- int: 4 bytes (-2,147,483,648 - 2,147,483,647)
- short: 2 bytes (-32,768 - 32,767)
- long: 4 bytes
- long long: 8 bytes ( -9,223,372,036,854,775,808 - 9,223,372,036,854,775,807)
- float: 4 bytes (~3.4E-38 - ~3.4E+38; with 7 decimal digits)
- double: 8 bytes (~1.7E-308 - ~1.7E+308 with 15 decimal digits)
- long double: Implementation-dependent; 8, 12/16 (~1.7E-308 - ~1.7E+308 with 15 decimal digits of precision/ ~3.4E-4932 - ~1.1E+4832 (when 10 bytes are used))
- char: 1 byte (Signed: -128 - 127 / Unsigned: 0 - 255)
- bool: 1 byte (true/false)

# Type casting debugging
- demo.cpp -o demo -Wconversion
- demo.cpp -o demo -Wconversion -Werror