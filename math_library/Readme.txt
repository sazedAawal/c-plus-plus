Compile all source files into object files:

    g++ -c main.cpp basic_math.cpp advanced_math.cpp geometry.cpp


Link the object files to create the executable:

    g++ main.o basic_math.o advanced_math.o geometry.o -o math_program


Run the programme:
    ./math_program

Final Compilation(after adding statistics)
    g++ main.cpp basic_math.cpp advanced_math.cpp geometry.cpp statistics.cpp -o math_program