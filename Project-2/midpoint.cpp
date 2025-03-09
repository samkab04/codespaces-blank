#include <iostream>
using namespace std;
int main()
{
 
// Local variable declarations
 
int trueCount = 0;
 
char Ans1;
 
// Question 1
 
cout << "Consider the following C++ code:" << endl;
 
cout << "float num1 = 4.2;" << endl;
 
cout << "int num2 = 3;" << endl;
 
cout << "int result = num1 * num2;" << endl;
 
cout << "What is the value of the variable result?" << endl;
 
cout << "a) 12.6" << endl;
 
cout << "b) 12" << endl;
 
cout << "c) 13" << endl;
 
cout << "d) 7.2" << endl;
 
cout << "e) None of the above" << endl;
 
cout << "Enter your answer: ";
 
cin >> Ans1;
 
// Checking if the answer is correct
 
if (Ans1 == 'b') { // The correct answer is 12
 
cout << "Correct!" << endl;
 
trueCount++;
 
} else {
 
cout << "Wrong :(" << endl;
 
}
 
// Output the result
 
cout << "You got " << trueCount << " question(s) correct." << endl;
 
return 0;