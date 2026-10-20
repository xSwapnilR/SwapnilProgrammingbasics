#include <iostream>
using namespace std;

// --------------------------------------------------------------------------------------------------------------
// BASE CLASS (Parent Class)
// --------------------------------------------------------------------------------------------------------------
class Employee
{
public:           // WHAT: Access Specifier. WHY: Allows members defined below to be directly accessible from outside the class and by derived classes.
    int id;       // WHAT: Member variable for Employee ID. WHY: Stores the unique identifier of an employee.
    float salary; // WHAT: Member variable for Employee Salary. WHY: Stores the monetary compensation for an employee.

    // PARAMETERIZED CONSTRUCTOR
    // WHAT: Constructor accepting an integer parameter.
    // WHY: Initializes a specific 'Employee' object with a given ID and default salary when instantiated.
    Employee(int inpId)
    {
        id = inpId;    // WHAT: Variable Assignment. WHY: Assigns the input parameter value to the object's 'id' member.
        salary = 34.0; // WHAT: Variable Assignment. WHY: Sets a default base salary value of 34.0 for every new employee.
    }

    // DEFAULT CONSTRUCTOR
    // WHAT: Zero-argument constructor with an empty body.
    // WHY: CRITICAL! When a derived class object ('Programmer') is instantiated, C++ ALWAYS invokes the Base class constructor FIRST.
    //      Since 'Programmer' does not explicitly call 'Employee(inpId)' in an initialization list, C++ looks for 'Employee()'.
    //      If this empty default constructor is removed, the compiler throws a Compilation Error!
    Employee() {}
};

// --------------------------------------------------------------------------------------------------------------
// DERIVED CLASS (Child Class) - SINGLE INHERITANCE
// --------------------------------------------------------------------------------------------------------------
// SYNTAX SYNOPIS: class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// WHAT: 'Programmer' inherits from 'Employee' using 'public' visibility mode.
// WHY:
//   1. Inheritance reuses 'id' and 'salary' members from 'Employee' without re-declaring them here.
//   2. 'public' visibility mode ensures public members of Base ('id', 'salary') remain 'public' inside Derived class.
class Programmer : public Employee
{
public:               // WHAT: Access Specifier. WHY: Makes 'languageCode', constructor, and 'getData()' accessible to 'main()'.
    int languageCode; // WHAT: Specialized member variable. WHY: Holds a code representing the programming language (e.g., 9 for C++).

    // DERIVED CLASS CONSTRUCTOR
    // WHAT: Constructor for 'Programmer'.
    // WHY: Initializes the Programmer object. Execution flow: Executes 'Employee()' first, then runs this block.
    Programmer(int inpId)
    {
        id = inpId;       // WHAT: Assigns value to inherited 'id'. WHY: 'id' was inherited from 'Employee'; sets derived object's ID.
        languageCode = 9; // WHAT: Assigns default language code. WHY: Initializes specific derived attribute.
    }

    // MEMBER FUNCTION
    // WHAT: Function to display object's ID.
    // WHY: Demonstrates that 'Programmer' can internally access and print the inherited 'id' member.
    void getData()
    {
        cout << id << endl; // WHAT: Output stream operation. WHY: Prints inherited 'id' followed by a line break.
    }
};

// --------------------------------------------------------------------------------------------------------------
// MAIN DRIVER FUNCTION
// --------------------------------------------------------------------------------------------------------------
int main()
{
    // OBJECT CREATION & BASE CLASS CONSTRUCTOR CALL
    // WHAT: Instantiates two 'Employee' objects named 'harry' and 'rohan'.
    // WHY: Calls 'Employee(int inpId)' constructor to set 'harry.id = 1' and 'rohan.id = 2'.
    Employee harry(1), rohan(2);

    // OUTPUT BASE CLASS MEMBERS
    // WHAT: Accessing 'salary' variable directly on base objects.
    // WHY: Works because 'salary' is in the 'public' section of 'Employee'. Prints '34' for both.
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    // DERIVED CLASS OBJECT CREATION
    // WHAT: Instantiates a 'Programmer' object named 'skillF' with argument '10'.
    // WHY:
    //   Step 1: Automatically calls 'Employee()' default constructor to set up Base part.
    //   Step 2: Executes 'Programmer(10)' constructor -> sets skillF.id = 10 and skillF.languageCode = 9.
    Programmer skillF(10);

    // ACCESSING DERIVED CLASS OWN MEMBER
    // WHAT: Direct access to 'languageCode'.
    // WHY: Works because 'languageCode' is public in 'Programmer'. Outputs '9'.
    cout << skillF.languageCode << endl;

    // ACCESSING INHERITED BASE MEMBER DIRECTLY
    // WHAT: Direct access to inherited 'id' via derived object 'skillF'.
    // WHY: Works because 'id' was public in 'Employee' AND inherited via 'public' visibility mode. Outputs '10'.
    cout << skillF.id << endl;

    // CALLING DERIVED CLASS MEMBER FUNCTION
    // WHAT: Executes 'getData()' method on 'skillF'.
    // WHY: Demonstrates internal derived member function execution accessing inherited data. Outputs '10'.
    skillF.getData();

    return 0; // WHAT: Return statement. WHY: Signals successful execution of main() to the operating system.
}