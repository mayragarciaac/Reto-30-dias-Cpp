/* 
    A var is a labeled box where you can store information
    Var declaration: dataType variableName = value; 
    info: https://www.codechef.com/blogs/variables-and-datatypes-in-cpp

    Data        Type	            Description	    Example
    int	        Whole               numbers	        42, -10, 0
    float	    Decimal             numbers	        3.14, -0.001
    double	    Larger              decimal         numbers	3.14159265359
    char	    Single              characters	    'A', '7', '$'
    bool	    True or false       values	        true, false

    There are more types of data and operators like: 
        Arithmetic operators +,-,/,*,%
        Assignment operators ==
        Comparison operators ==, ?
        Logical operators &&, || 
        Bitwise operators: OR, XOR, AND, <<, >>
*/

#include <iostream>
using namespace std;

int main() {

    int age = 29;
    cout << "My age is: " << age << endl;
    
    // We can change the value of a variable
    age = 30;
    cout << "Next year, my age will be: " << age << endl;

    //  Operations  --------------------------------------
    int a = 5;
    int b = 3;
    int sum = a + b;  // sum will be 8

    int count = 0;
    count = count + 1;  // count is now 1

    string name = "Mayra";
    age = 29;
    cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;

    long long int bigNumber = 1000000000000;
    cout << "Big number: "<< bigNumber << endl;

    //  Conversions     -------------------------------------
    float num = 7.89;
    int roundedNum = int(num);  // roundedNum will be 7
    cout << "Rounded: "<< num << " => "<< roundedNum << endl;

    char letter = 'M';
    cout << letter << " => "<< int(letter) << ", Next letter: " <<  char(int(letter) + 1) << endl;  
    // Outputs 77 (ASCII value of 'M')
    
    return 0;
}
