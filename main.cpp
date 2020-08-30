// ASSIGNMENT NAME: Lab 1.2
// PROGRAMMER NAME: Matthew Davenport
//
// DATE: 8/30/20
#include <iostream>
using namespace std;

// uncomment the above "using" directive and you can write:
//   cout instead of std::cout
//   cin  instead of std::cin
//   endl instead of std::endl

// QUESTIONs do not have to be answered -- they are there for your consideration.

int main() {
  // 1. Print a greeting
    cout<<"Good morning!"<<endl;

  // 2. Declare 2 integer variables
    int a;
    int b;

  // 3. Prompt for the first integer
    cout<<"Please enter a number"<<endl;

  // 4. Read in the first integer
    cin>>a;

  // 5. Prompt for the second integer
    cout<<"Please enter a second number"<<endl;
  
  // 6. Read in the second integer
    cin>>b;

  // 7. Display the result of adding the two variables together
  //    e.g., 3 + 2 = 5 (use the two variables and the calculated value in the output)
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;

  // 8. Display the result of subtracting the second integer from the first
  //    e.g., 3 - 2 = 1 (use the two variables and the calculated value in the output)
    cout<<"The difference of "<<b<<" and "<<a<<" is "<<b-a<<endl;

  // 9. Display the result of multiplying the two variables
  //    e.g., 3 * 2 = 6 (use the two variables and the calculated value in the output)
    cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b<<endl;

  // 10. Display the result of dividing the first integer by the second
  //    e.g., 3 / 2 = 1 (use the two variables and the calculated value in the output)
    cout<<"The quotient of "<<a<<" and "<<b<<" is "<<a/b<<endl;

  // 11. Display the result of modding (%) the first integer by the second
  //    e.g., 3 % 2 = 1 (use the two variables and the calculated value in the output)
    cout<<"The mod of "<<a<<" and "<<b<<" is "<<a%b<<endl;
  //    QUESTION: What does modulo/mod (%) do?

  // 12. Declare 2 float variables
    float c;
    float d;

  // 13. Prompt for the first float
    cout<<"Please enter a decimal number"<<endl;

  // 14. Read in the first float
    cin>>c;

  // 15. Prompt for the second float
    cout<<"Please enter a second decimal number"<<endl;

  // 16. Read in the second float
    cin>>d;

  // This code will "pretty print" the float variables.
  // Try changing the "2" to other values to see what happens.
  // If you did not uncomment "using" above, you need to use std::cout
  //   on all three of these lines.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(10);

  // 17. Display the result of adding the two variables together
  //    e.g., 3.20 + 2.10 = 5.30 (use the two variables and the calculated value in the output)
  cout<<"The sum of "<<c<<" and "<<d<<" is "<<c+d<<endl;

  // 18. Display the result of subtracting the second float from the first
  //    e.g., 3.20 - 2.10 = 1.10 (use the two variables and the calculated value in the output)
  cout<<"The difference of "<<d<<" and "<<c<<" is "<<d-c<<endl;

  // 19. Display the result of multiplying the two variables
  //    e.g., 3.20 * 2.10 = 6.72 (use the two variables and the calculated value in the output)
  cout<<"The product of "<<c<<" and "<<d<<" is "<<d*c<<endl;

  // 20. Display the result of dividing the first float by the second
  //    e.g., 3.20 / 2.10 = 1.52 (use the two variables and the calculated value in the output)
  cout<<"The quotient of "<<c<<" and "<<d<<" is "<<c/d<<endl;
  // QUESTION: Why is there no modulo (%) operation required for the float variables?

  return 0;
}