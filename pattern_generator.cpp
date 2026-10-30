#include <iostream>
#include <string>

using namespace std;

// Function Declarations
void printMenu();
void generateRightTriangle(int height);
void generatePyramid(int height);
void generateDiamond(int height);
void generateNumberPattern(int height);
void generateCustomPattern(int height);

// Optional Tests
void generateInverseRightTriangle(int height);
void generateHollowDiamond(int height);

// Main Function ---
int main() {
    // Display a welcome message
    cout << "-----------------------------------------" << endl;
    cout << "            PATTERN GENERATOR            " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "This programme generates various patterns" << endl;
    cout << "using different types of loop systems." << endl << endl;
    
    /*
    
    bool exitProgramme = false;
    while(!exitProgramme) {
        printMenu();
        int choice;
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        if (choice == 6) {
            exitProgramme = true;
            cout << "Thank you for using the Pattern Generator!" << endl;
            continue;
        }
        int height;
        cout << "Enter pattern height (1-20): ";
        cin >> height;
        // Validate the height input
        if (height < 1 || height > 20) {
            cout << "Invalid Height! Please enter a value between 1 and 20" << endl;
            continue;
        }
        // Call the appropriate pattern function based on user choice
        switch (choice) {
            case 1:
                generateRightTriangle(height);
                break;
            case 2:
                generatePyramid(height);
                break;
            case 3:
                generateDiamond(height);
                break;
            case 4:
                generateNumberPattern(height);
                break;
            case 5:
                generateCustomPattern(height);
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 6!" << endl;
        }
        cout << endl;
    }
    
    */
    
    // Tests ---
    // generateRightTriangle(5);
    // generatePyramid(5);
    generateDiamond(5);
    // generateNumberPattern(5);
    // generateCustomPattern(5);

    // Optional Tests ---
    generateInverseRightTriangle(5);
    generateHollowDiamond(5);

    return 0;
}

// Functions ---
// Function to display the menu
void printMenu() {
    cout << "\nSelect a pattern to generate:" << endl;
    cout << "1. Right-angled Triangle (using for loop)" << endl;
    cout << "2. Pyramid (using while loop)" << endl;
    cout << "3. Diamond (using do-while loop)" << endl;
    cout << "4. Number Pattern (using nested loops)" << endl;
    cout << "5. Custom Pattern (combination of loops)" << endl;
    cout << "6. Exit" << endl;
}

// Function to generate a right-angled triangle pattern using a for loop
void generateRightTriangle(int height) {
    cout << "\n--- Right-angled Triangle (For Loop) ---\n" << endl;
    // Outer loop controls the number of rows
    for (int i = 0; i < height; i ++) {
        // Inner loop controls the number of stars in each row
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Function to generate a pyramid pattern using a while loop
void generatePyramid(int height) {
    cout << "\n--- Pyramid Pattern (While Loop) ---\n" << endl;
    int row = 0;
    // Outer loop controls the number of rows
    while (row < height) {
        //Inner loop for spaces before stars
        int space = 0;
        while (space < height - row - 1) {
            cout << " ";
            space++;
        }
        // Inner loop for stars
        int star = 0;
        while (star < 2 * row + 1) {
            cout << "*";
            star++;
        }
        cout << endl;
        row++;
    }
}

// Function to generate a diamond pattern using a do-while loop
void generateDiamond(int height) {
    cout << "\n--- Diamond Pattern (Do-While Loop) ---\n" << endl;
    int row = 0;

    // Upper half of the diamond
    do {
        // Spaces before stars
        int space = 0;
        do {
            cout << " ";
            space++;
        } while (space < height - row);
        // Stars
        int star = 0;
        do {
            cout << "* ";
            star++;
        } while (star <= row);
        cout << endl;
        row++;
    } while (row < height);

    // Lower half of the diamond
    row = height - 2; // Start from second-to-last row
    do {
        // Spaces before stars
        int space = 0;
        do {
            cout << " ";
            space++;
        } while (space < height - row);
        // Stars
        int star = 0;
        do {
            cout << "* ";
            star++;
        } while (star <= row);
        cout << endl;
        row--;
    } while (row >= 0);
}

// Function to generate a number pattern using nested loops
void generateNumberPattern(int height) {
    cout << "\n--- Number Pattern (Nested Loops) ---\n" << endl;
    for (int i = 1; i <= height; i++) {
        // Print Spaces
        for (int j = 1; j <= height - i; j++) {
            cout << "  ";
        }
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Function to generate a custom pattern using a combination of loop types
void generateCustomPattern(int height) {
    cout << "\n--- Custom Pattern (Combined Loops) ---\n" << endl;
    // Using for loop with break and continue
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height; j++) {
            // Skip printing in the middle section
            if (i != 1 && i != height && j != 1 && j != height) {
                continue; // Skip this iteration and continue with the next
            }
            // Print asterisks for the border
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\nAnd another pattern using while and for loops:\n" << endl;
    // Using while loop and for loop combination
    int i = 1;
    while (i <= height) {
        // Print spaces using for loop
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        // Print numbers in each row
        int j = i;
        while (j <= 2 * i - 1) {
            cout << j % 10; // Use modulo to keep single digit
            j++;
            if (j > 2 * i - 1) {
                break; // Exit the loop when done
            }
        }
        cout << endl;
        i++;
    }
}

// Optional Functions ---
// Optional - Combination of 2 loop types, both break and continue statements in implementation.


// Optional - Function to generate hollow diamond pattern
void generateHollowDiamond(int height) {
    cout << "\n--- Hollow Diamond Pattern (Do-While Loop) ---\n" << endl;
    int row = 0;

    // Upper half of the diamond
    do {
        // Spaces before stars
        int space = 0;
        do {
            cout << " ";
            space++;
        } while (space < height - row - 1);
        // Hollow structure (Left star, inner spaces, right star)
        if (row == 0) {
            cout << "*"; // Tip of the triangle
        } else {
            cout << "*"; // Left border star
            // Inner spaces
            int innerSpace = 0;
            do {
                cout << " ";
                innerSpace++;
            } while (innerSpace < (2 * row - 1));
            
            cout << "*"; // Right border star
        }
        cout << endl;
        row++;
    } while (row < height);

    // Lower half of the diamond
    row = height - 2; // Start from second-to-last row
    do {
        // Spaces before stars
        int space = 0;
        do {
            cout << " ";
            space++;
        } while (space < height - row - 1);
        // Hollow structure (Left star, inner spaces, right star)
        if (row == 0) {
            cout << "*"; // Tip of the triangle
        } else {
            cout << "*"; // Left border star
            // Inner spaces
            int innerSpace = 0;
            do {
                cout << " ";
                innerSpace++;
            } while (innerSpace < (2 * row - 1));
            
            cout << "*"; // Right border star
        }

        cout << endl;
        row--;
    } while (row >= 0);
}

// Optional - Function to generate an inverted right-angled triangle pattern
void generateInverseRightTriangle(int height) {
    cout << "\n--- Inverted Right-angled Triangle (For Loop) ---\n" << endl;
    // Outer loop controls the number of rows
    for (int i = 0; i < height; i ++) {
        // Inner loop controls the number of stars in each row
        for (int j = 0; j <= height - i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
