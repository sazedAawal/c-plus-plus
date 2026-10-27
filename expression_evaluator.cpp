#include <iostream> 
#include <cmath>
#include <vector>

using namespace std;

// Function Prototype
double performOperation(double a, char op, double b);
bool performComparison(double a, string op, double b);
bool performLogicalNot(bool a);
bool performLogical(bool a, string op, bool b);
bool isOperator(char c);
int getPrecedence(char op);
double applyOperator(double a, char op, double b);
double evaluateExpression(string expression);
void explainPrecedence();
void stepByStepEvaluation(string expression);


// THE MAIN FUNCTION ---
int main(){
    // Display Welcome Message
    cout << "---------------------------------" << endl;
    cout << "MATHEMATICAL EXPRESSION EVALUATOR" << endl;
    cout << "---------------------------------" << endl;
    cout << "This programme evaluates mathematical expressions" << endl;
    cout << "using various operators and precedence rules." << endl;

    // Main Programme
    // performOperation();
    bool continueCalculations = true;
    while (continueCalculations) {
        double num1, num2;
        char op, choice;
        cout << "\nEnter a simple expression (number operator number): ";
        cin >> num1 >> op >> num2;
        double result = performOperation(num1, op, num2);
        
        cout << "Result: " << num1 << " " << op << " " 
            << num2 << " = " << result << endl;
        
        cout << "\nContinue with another calculation? (y/n): ";
        cin >> choice;
        continueCalculations = (choice == 'y' || choice == 'Y');
    }

    // performComparison();
    cout << "\nSelect Operation Type: " << endl;
    cout << "1. Arithmatic (number operator number)" << endl;
    cout << "2. Comparison (number operator number)" << endl;
    cout << "3. Logical (true/false operator true/false)" << endl;
    cout << "4. Complex Expression (e.g., 2 + 3 * 4)" << endl;
    cout << "5. Explain operator precedence" << endl;
    cout << "6. Step-by-step evaluation" << endl;
    cout << "Enter choice (1, 2, 3, 4, 5 or 6): ";

    int operationType;
    cin >> operationType;

    if (operationType == 1) {
        // Existing Arithmetic Code
        double num1, num2;
        char op;
        cout << "\nEnter a Simple Expression (number operator number): ";
        cin >> num1 >> op >> num2;
        double result = performOperation(num1, op, num2);
        cout << "Result: " << num1 << " " << op
            << " " << num2 << " = " << result << endl;
    } else if (operationType == 2) {
        // New Comparison Code
        double num1, num2;
        string op;
        cout << "\nEnter a Comparison Expression (number operator number)" << endl;
        cout << "Available Operators: ==, !=, <, >, <=, >=" << endl;
        cout << "Expression: ";
        cin >> num1 >> op >> num2;
        bool result = performComparison(num1, op, num2);
        cout << "Result: " << num1 << " " << op << " "
            << num2 << " = " << (result ? "true" : "false") << endl;
    } else if (operationType == 3) { // performLogical(); performLogicalNot();
        cout << "\nSelect Logical Operation: " << endl;
        cout << "1. AND/OR (Value operator value)" << endl;
        cout << "2. NOT (Not value)" << endl;
        cout << "Enter choice (1 or 2): ";

        int logicChoice;
        cin >> logicChoice;

        if (logicChoice == 1) {
            bool val1, val2;
            string op;
            cout << "\nEnter values as 1 (true) or 0 (false)" << endl;
            cout << "Expression (value operator value):";
            cin >> val1 >> op >> val2;
            bool result = performLogical(val1, op, val2);
            
            cout << "Result: " << (val1 ? "true":"false") << " " << op << " "
                << (val2 ? "true" : "false") << " = " << (result ? "true" : "false") << endl;
        }   else if (logicChoice == 2) {
                bool val;
                cout << "\nEnter value as 1 (true) or 0 (false): ";
                cin >> val;
                bool result = performLogicalNot(val);
                cout << "Result: !" << (val ? "true" : "false") << " = " << (result ? "true" : "false") << endl;
        }
    }   else if (operationType == 4) {
            string expression;
            cout << "\nEnter a complex expression (e.g., 2 + 3 * 4): ";
            cin.ignore(); // Clear Input Buffer
            getline(cin, expression);

            double result = evaluateExpression(expression);
            cout << "Result: " << expression << " = " << result << endl;
    }   else if (operationType == 5) {
            explainPrecedence();
    }   else if (operationType == 6) {
            string expression;
            cout << "\nEnter an expression to evaluate step-by-step: ";
            cin.ignore(); // Clear input buffer
            getline(cin, expression);
            stepByStepEvaluation(expression);
    }   else {
            cout << "Invalid Choice!" << endl;
    }

    // Return Statement
    cout << "The Programme has ended" << endl;
    return 0;
}

// Functions ---
// Function to perform basic arithetic operations
double performOperation(double a, char op, double b) {
    switch (op){
        case '+': return a+b; // Addition
        case '-': return a-b; // Subtraction
        case '*': return a*b; // Multiplication
        case '/': 
            if (b != 0) {
                return a/b;
            } else {
                cout << "Error: Division by Zero!" << endl;
                return 0;
            }
        case '%': // Modulus (remainder)
            if (b != 0) {
                return static_cast<int>(a) % static_cast<int>(b);
            } else {
                cout << "Error: Division by Zero!" << endl;
                return 0;
            }
        case '^':
            return pow(a,b);
        default:
            cout << "Error: Unknown Operator!" << endl;
            return 0;
    }
}

// Function to perform relational operations
bool performComparison(double a, string op, double b) {
    if (op == "==") return a == b; // Equal to
    if (op == "!=") return a != b; // Not equal to
    if (op == "<") return a < b; // Less than
    if (op == ">") return a > b; // Greater than
    if (op == "<=") return a <= b; // Less than or equal to
    if (op == ">=") return a >= b; // Greater than or equal to
    cout << "Error: Unknown Comparison Operator!" << endl;
    return false;
}

// Function to perform logical operations
bool performLogical(bool a, string op, bool b) {
    if (op == "&&") return a && b; // Logical AND
    if (op == "||") return a || b; // Logical OR
    cout << "Error: Unknown Logical Operator!" << endl;
    return false;
}

// Function to perform logical NOT operation
bool performLogicalNot(bool a) {
    return !a; // Logical NOT
}

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '%' || c == '^');
}

// Function to get operator precedence
int getPrecedence(char op) {
    if (op == '+' || op == '-') 
        return 1;
    if (op == '*' || op == '/' || op == '%')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Function to apply an operator to two operands
double applyOperator(double a, char op, double b) {
    return performOperation(a, op, b);
}

// Function to evaluate a simple expression with proper precedence
double evaluateExpression(string expression) {
    // Create a vector of numbers and operators
    vector<double> values;
    vector<char> ops;
    for (int i = 0; i < expression.length(); i++) {
        // Skip Spaces
        if (expression[i] == ' ')
            continue;
        // If current character is a digit or decimal point
        if (isdigit(expression[i]) || expression[i] == '.') {
            string numStr = "";
            // Extract the entire number
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                numStr += expression[i];
                i++;
            }
            i--; // Move back one position since the for loop will increment
            // Convert string to double and add to values
            values.push_back(stod(numStr));
        } else if (isOperator(expression[i])) { // If current character is an operator
            // While there's an operator with higher or equal precedence on the stack
            while (!ops.empty() && getPrecedence(ops.back()) >= getPrecedence(expression[i])) {
                double val2 = values.back(); values.pop_back();
                double val1 = values.back(); values.pop_back();
                char op = ops.back(); ops.pop_back();
                values.push_back(applyOperator(val1, op, val2));
            }
            // Push current operator to stack
            ops.push_back(expression[i]);
        } else if (expression[i] == '(') { // If current character is an opening paranthesis
            ops.push_back(expression[i]);
        } else if (expression[i] == ')') { // If current character is a closing paranthesis
            // Evaluate everything inside the paranthesis
            while (!ops.empty() && ops.back() != '(') {
                double val2 = values.back(); values.pop_back();
                double val1 = values.back(); values.pop_back();
                char op = ops.back(); ops.pop_back();
                values.push_back(applyOperator(val1, op, val2));
            }
            // Remove the opening paranthesis
            if (!ops.empty())
                ops.pop_back();
        }
    }

    // Evaluate remaining operators
    while (!ops.empty()) {
        double val2 = values.back(); values.pop_back();
        double val1 = values.back(); values.pop_back();
        char op = ops.back(); ops.pop_back();
        values.push_back(applyOperator(val1, op, val2));
    }
    // Return the final result
    if (!values.empty())
        return values.back();
    else
        return 0;
}

// Function to explain operator precedence
void explainPrecedence() {
    cout << "\n--- OPERATOR PRECEDENCE ---" << endl;
    cout << "Operators are evaluated in the following order (highest to lowest):" << endl;
    cout << "1. Parantheses: ( )" << endl;
    cout << "2. Exponentiation: ^" << endl;
    cout << "3. Multiplication, Division, Modulus: *, /, %" << endl;
    cout << "4. Addition, Subtraction: +, -" << endl;
    cout << "5. Relational Operators: <, >, <=, >=, ==, !=" << endl;
    cout << "6. Logical NOT: !" << endl;
    cout << "7. Logical AND: &&" << endl;
    cout << "8. Logical OR: ||" << endl;
    cout << "\nExample: 2 + 3 * 4 = 2 + (3 * 4) = 2 + 12 = 14" << endl;
    cout << "Example: (2 + 3) * 4 = 5 * 4 = 20" << endl;
}

// Function to demonstrate step-by-step evaluation
void stepByStepEvaluation(string expression) {
    cout << "\n--- STEP-BY-STEP EVALUATION ---" << endl;
    cout << "Expression: " << expression << endl;
    cout << "Step 1: Identify operators and their precedence" << endl;
    // This is simplified demonstration
    // In a real step-by-step evaluator, we would show each step of the evaluation process
    cout << "Step 2: Evaluate operations according to precedence" << endl;
    if (expression.find('*') != string::npos || expression.find('/') != string::npos) {
        cout << " - Evaluate multiplication and division first" << endl;
        // Example: Replace this with actual step-by-step evaluation
        cout << " - Example: If expression is '2 + 3 * 4', evaluate '3 * 4' first to get '12'" << endl;
    }
    cout << "Step 3: Evaluate remaining operations" << endl;
    cout << "Final Result: " << evaluateExpression(expression) << endl;
}