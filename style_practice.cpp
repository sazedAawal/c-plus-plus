#include <iostream>
using namespace std;

// Main Class
class Calculator{
public: 
    int x,y;
    
    // Addition Function
    void addition(){
        x = 10;
        y = 20;
        int addition_result = x + y;
        cout << "Result is " << addition_result << endl;
        
        if(addition_result > 25){
            cout << "Big Number" << endl;
        } else{
            cout << "Small Number" << endl;
        }
    }
};

int main(){
    Calculator c;
    c.addition();
    return 0;
}