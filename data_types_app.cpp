#include <iostream>
#include <climits> // For data type limits like INT_MAX

int main() {
    // Display programme header
    std::cout << "-------------------------------" << std::endl;
    std::cout << "PRACTICAL DATA TYPE APPLICATION" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "This programme demonstrates appropriate usage of " << std::endl;
    std::cout << "different data typesfor various kinds of information." << std::endl;

    // Main Programme Begins...
    // --- Age Data Section ---
    std::cout << "\n--- AGE DATA SECTION ---" << std::endl;
    std::cout << "Selecting appropriate data types for age information:" << std::endl;

    // Integer type for ages (no fractional years needed)
    int childAge = 8;
    int teenAge = 15;
    int adultAge = 42;

    // Display age information
    std::cout << "Child Age: " << childAge << " years" << std::endl;
    std::cout << "Teen Age: " << teenAge << " years" << std::endl;
    std::cout << "Adult Age: " << adultAge << " years" << std::endl;

    // Show memory usage
    std::cout << "\nAge data memory usage -" << std::endl;
    std::cout << "Size of int (for ages): " << sizeof(int) << " bytes" << std::endl;

    // Demonstrate age calculations
    std::cout << "\nAge calculations -" << std::endl;
    int totalAges = childAge + teenAge + adultAge;
    std::cout << "Total of all ages: " << totalAges << " years" << std::endl << std::endl;

    // Age calculation practice ---
    // Average age calculation
    int averageAge = totalAges / 3;
    std::cout << "Average Age: " << averageAge << " years" << std::endl;

    // Age difference calculation
    int ageDifferenceTeenAdult = adultAge - teenAge;
    std::cout << "Age difference between adult and teen: " << ageDifferenceTeenAdult << " years" << std::endl;
    
    int ageDifferenceTeenChild = teenAge - childAge;
    std::cout << "Age difference between teen and child: " << ageDifferenceTeenChild << " years" << std::endl;

    int ageDifferenceAdultChild = adultAge - childAge;
    std::cout << "Age difference between adult and child: " << ageDifferenceAdultChild << " years" << std::endl;

    // Personal Age Calculation --- Future Work: Find which user group is myAge.
    // --- Uncomment the following lines to allow user input for age and display it. ---
    // int myAge;
    // std::cout << "\nEnter your age: ";
    // std::cin >> myAge;
    // std::cout << "You are " << myAge << " years old." << std::endl;

    // --- PRICE DATA SECTION ---
    std::cout << "\n--- PRICE DATA SECTION ---" << std::endl;
    std::cout << "Selecting appropriate data types for price information:" << std::endl;

    // Use double for prices (needs decimal precision)
    double coffeePrice = 3.99;
    double laptopPrice = 2499.99;
    double housePrice = 350000.00;

    // Display price information
    std::cout << "Coffee Price: $" << coffeePrice << std::endl;
    std::cout << "Laptop Price: $" << laptopPrice << std::endl;
    std::cout << "House Price: $" << housePrice << std::endl;

    // Show memory usage comparison
    float priceAsFloat = 19.99f;
    double priceAsDouble = 19.99;
    std::cout << "\nPrice storage comparison -" << std::endl;
    std::cout << "Price as float: $" << priceAsFloat << " (uses " << sizeof(float) << " bytes)" << std::endl;
    std::cout << "Price as double: $" << priceAsDouble << " (uses " << sizeof(double) << " bytes)" << std::endl;

    // Simple price calculations
    double totalPrice = coffeePrice + laptopPrice;
    std::cout << "\nPrice calculations - " << std::endl;
    std::cout << "Coffee + Laptop Total: $" << totalPrice << std::endl;

    // --- CHARACTER DATA SECTION ---
    std::cout << "\n--- CHARACTER DATA SECTION ---" << std::endl;
    std::cout << "Selecting appropriate data types for character information:" << std::endl;

    // Character variables for single characters
    char grade = 'A';
    char symbol = '$';
    char initial = 'J';

    // Display character information
    std::cout << "Student Grade: " << grade << std::endl;
    std::cout << "Special Symbol: " << symbol << std::endl;
    std::cout << "First Initial: " << initial << std::endl;

    // Show how characters relate to numbers (ASCII values)
    std::cout << "\nCharacter to ASCII number conversion -" << std::endl;
    std::cout << "Grade '" << grade << "' has ASCII value: " << (int)grade << std::endl;
    std::cout << "Symbol '" << symbol << "' has ASCII value: " << (int)symbol << std::endl;

    // Show memory usage
    std::cout << "\nCharacter data memory usage -" << std::endl;
    std::cout << "Size of Char: " << sizeof(char) << " byte" << std::endl;

    // Character practice ---
    // My initials are stored in char variables
    char myFirstInitial = 'S';
    char myLastInitial = 'A';
    // Display them and their ASCII values
    std::cout << "My First Initial '" << myFirstInitial << "' has ASCII value: " << (int)myFirstInitial << std::endl;
    std::cout << "My Last Initial '" << myLastInitial << "' has ASCII value: " << (int)myLastInitial << std::endl;

    // - Show your favorite letter
    char favouriteLetter = 'D';
    std::cout << "My favourite letter is '" << favouriteLetter << "' with ASCII value: " << (int)favouriteLetter << std::endl;


    // --- BOOLEAN DATA SECTION ---
    std::cout << "\n--- BOOLEAN DATA SECTION ---" << std::endl;
    std::cout << "Using boolean data types for true/false information:" << std::endl;

    // Boolean variables for simple flags
    bool isActive = true;
    bool hasPermission = false;
    bool isCompleted = true;

    // Display boolean values (they show as 1 for true, 0 for false)
    std::cout << "User account active: " << isActive << std::endl;
    std::cout << "User has admin permission: " << hasPermission << std::endl;
    std::cout << "Task completed: " << isCompleted << std::endl;

    // Show memory usage
    std::cout << "\nBoolean data memory usage:" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
    
    // Simple boolean comparisons
    std::cout << "\nBoolean comparisons:" << std::endl;
    std::cout << "Are both account active AND task completed? ";
    if (isActive == true && isCompleted == true) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    // --- SIMPLE PRODUCT EXAMPLE ---
    std::cout << "\n--- SIMPLE PRODUCT EXAMPLE ---" << std::endl;
    std::cout << "Combining multiple data types for a product:" << std::endl;

    // Product information using different data types
    int productId = 12345;
    double productPrice = 29.99;
    char productGrade = 'B';
    bool inStock = true;

    // Display product information
    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << productId << std::endl;
    std::cout << "Price: $" << productPrice << std::endl;
    std::cout << "Quality Grade: " << productGrade << std::endl;
    std::cout << "In Stock: " << inStock << std::endl;

    // Simple calculations
    double salesTax = productPrice * 0.08;  // 8% tax
    double totalPriceOfProduct = productPrice + salesTax;
    
    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (8%): $" << salesTax << std::endl;
    std::cout << "Total with tax: $" << totalPriceOfProduct << std::endl;
    
    // Memory usage summary
    int totalMemory = sizeof(productId) + sizeof(productPrice) + sizeof(productGrade) + sizeof(inStock);
    std::cout << "\nTotal memory used for this product: " << totalMemory << " bytes" << std::endl;

    // Extra Sections ---
    // A second product added
    // Created variables for: productId2, productPrice2, productGrade2, inStock2

    // Prodcut 2 Information:
    int productId2 = 67890;
    double productPrice2 = 39.99;
    char productGrade2 = 'A';
    bool inStock2 = true;

    // Display the information and compare prices
    // Display product2 information
    std::cout << "\nProduct 2 Information:" << std::endl;
    std::cout << "Product ID: " << productId2 << std::endl;
    std::cout << "Price: $" << productPrice2 << std::endl;
    std::cout << "Quality Grade: " << productGrade2 << std::endl;
    std::cout << "In Stock: " << inStock2 << std::endl;

    // Product 2 Price
    double salesTax2 = productPrice2 * 0.08;  // 8% tax
    double totalPriceOfProduct2 = productPrice2 + salesTax2;

    double comparePriceProduct1And2 = totalPriceOfProduct - totalPriceOfProduct2;
    std::cout << "\nPrice Comparison:" << std::endl;
    std::cout << "The difference in total price between Product 1 and Product 2 is: $" << comparePriceProduct1And2 << std::endl;

    // Programme Conclusion
    std::cout << "\n--- PROGRAMME CONCLUSION ---" << std::endl;
    std::cout << "This programme has demonstrated the appropriate usage of various data types" << std::endl;

    // Return Statement
    return 0;
}