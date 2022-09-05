#include <iostream>
#include <string> //including the string Library

using namespace std;

int main() {


    //This is how to print anything
    cout << "Hello World \n\n";
    cout << "This is my first C++ code.\n" ;


    //Examples of DataTypes and Variable Declarations
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)
    //Printing  A variable 
    cout << myText << myLetter << myNum << myBoolean;

    //Printing a variable in inside a string
    cout << "\nAbid Says " << myText << " To all ! ";
    //Creating multiple variables at once 
    int x, y, z ;
    //Assigning the value to a every variable 
    x = y = z =50 ;
    /*
     The general rules for naming variables are:
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words cannot be used as names
    */
    //Constants : When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only)
    //const int myNum = 15;  // myNum will always be 15
    //myNum = 10;  // error: assignment of read-only variable 'myNum'

    //Taking Input In C++ 
    int d; //Creating a variable to store the variable is ! 
    cout << "\nType a number: "; // Type a number and press enter
    cin >> d; // Get user input from the keyboard
    cout << "\nYour number is: " << d; // Display the input value

    //Although the + operator is often used to add together two values, like in the example above, 
    //it can also be used to add together a variable and a value, or a variable and another variable:
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)  

    /*
    ogical operators are used to determine the logic between variables or values:

    Operator	Name	        Description	                                                    Example	
    && 	        Logical and	    Returns true if both statements are true	                    x < 5 &&  x < 10	
    || 	        Logical or	    Returns true if one of the statements is true	                x < 5 || x < 4	
    !	        Logical not	    Reverse the result, returns false if the result is true	        !(x < 5 && x < 10)
    */
    return 0;
}