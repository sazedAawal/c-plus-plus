// Include necessary headers
#include <iostream> // For input/output operation
#include <iomanip> // For output formatting
#include <string> // For string data type
//#include <date> // For date
#include <random> // For random numbers

// Using the standard namespace
using namespace std;

// Main Programme Structure
int main(){
    // Programme title and introduction
    cout << "Multi-Component Programme" << endl << endl;
    cout << "This programme demonstrates using multiple headers" << endl;
    cout << "and formatting techniques in C++" << endl << endl;

    // ***Component 1: Basic Info Display***
    cout << "--- COMPONENT 1: BASIC INFO ---" << endl;

    // Create variables to store information
    /*
        A string is a sequence of characters
        A variable is a storage location that holds a value
    */
    string name = "C++ Programming";
    string version = "C++17";
    string creator = "Bjarne Stroustrup";
    int yearCreated = 1985;

    // Add more variable and facts about C++
    string fact1 = "";
    bool fact2 = true;
    int fact3 = 0;

    // Display the information
    cout << "Language: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Creator: " << creator << endl;
    cout << "Year Created: " << yearCreated << endl << endl;

    // Display additional facts
    cout << "Interesting Fact 1: " << fact1 << endl;
    cout << "Interesting Fact 2: " << (fact2 ? "Yes" : "No") << endl;
    cout << "Interesting Fact 3: " << fact3 << endl << endl;


    // ***Component 2: Formatted numeric output***
    cout << "---COMPONENT 2: FORMATTED NUMBERS---" << endl;

    // Create numberic variables
    double pi = 3.14149;
    double e = 2.71828;
    double goldenRatio = 1.61903;

    // Display with different precision
    cout << "Default display: " << endl;
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 2 decimal places:" << endl;
    cout << fixed << setprecision(2);
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Goldern Ratio = " << goldenRatio << endl << endl;

    // Reset formatting
    cout.unsetf(ios::fixed);
    cout << setprecision(5);

    // ***Component 3: Table display***
    cout << "---COMPONENT 3: TABLE DATA---" << endl;

    // Set up table header
    // setw sets the field width for the next output
    cout << left << setw(15) 
    << "Data Type" << setw(20) 
    << "Size (bytes)" << setw(20)
    << "Value Range" << endl;

    cout << string(55,'-') << endl;

    // Table rows
    cout << left << setw(15)
    << "int" << right << setw(20)
    << sizeof(int) << left << setw(20)
    << " -2^31 to 2^31-1 " << endl;

    cout << left << setw(15)
    << "double" << right << setw(20)
    << sizeof(double) << left << setw(20)
    << " +/-1.7e^308 " << endl;

    cout << left << setw(15)
    << "char" << right << setw(20)
    << sizeof(char) << left << setw(20)
    << " -128 to 127 " << endl;

    cout << left << setw(15)
    << "bool" << right << setw(20)
    << sizeof(bool) << left << setw(20)
    << " true or false " << endl;

    cout << left << setw(15)
    << "float" << right << setw(20)
    << sizeof(float) << left << setw(20)
    << " 3.4e38 to 1.17e - 38 " << endl;

    cout << left << setw(15)
    << "long" << right << setw(20)
    << sizeof(long) << left << setw(20)
    << " +/-2.14 * 10^9 " << endl;


    // ***Component 4: Custom component - Programme information***
    cout << "\n---COMPONENT 4: PROGRAMME INFO---" << endl;

    // Get current date/time info (simulated)
    string currentDate = "2026-10-21";
    string userName = "C++ Learner";
    int linesOfCode = 146;

    // Format and display programme information
    cout << "Programme: Multi-Component Example" << endl;
    cout << "Author: " << userName << endl;
    cout << "Date: " << currentDate << endl;
    cout << "Code Statistics: " << endl;
    cout << " - Lines of Code: " << linesOfCode << endl;
    cout << " - Header Files: 3" << endl;
    cout << " - Component: 4" << endl;

    // Display a progress bar (simulated)
    cout << "Completion: [";
    int progress = 80; // 80% complete
    // A loop allows something to happen over and over again
    for (int i = 0; i < 20; i ++){
        if (i < progress/5) cout << '=';
        else cout << " ";
    }
    cout << ']' << progress << '%' << endl << endl;

    // Programme End
    cout << "\nProgramme execution completed!" << endl;
    return 0;
} 