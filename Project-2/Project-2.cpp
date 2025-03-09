
#include <iostream>
using namespace std;
int main()
{
 
// Local variable declarations
 
int trueCount = 0;
 
char Ans1, Ans2, Ans3, Ans4, Ans5;
 
float Average;
 
char Grade;
 
// Question 1
 
cout << "Consider the following C++ code:" << endl;
 
cout << "float num1 = 5.5;" << endl;
 
cout << "int num2 = 2;" << endl;
 
cout << "int result = num1 / num2;" << endl;
 
cout << "What is the value of the variable `result`? " << endl;
 
cout << "a) 2.75" << endl;
 
cout << "b) 2" << endl;
 
cout << "c) 3" << endl;
 
cout << "d) 5" << endl;
 
cout << "e) none of the above" << endl;
 
cout << "Enter your answer: ";
 
cin >> Ans1;
 
// Checking if the answer is correct
 
if (Ans1 == 'b') {
 
cout << "Correct!" << endl;
 
trueCount++;
 
} else {
 
cout << "Wrong :(" << endl;
 
}
 
// Question 2
 
cout << "Consider the following C++ code:" << endl;
 
cout << "double num1 = 7.8;" << endl;
 
cout << "int num2 = 2;" << endl;
 
cout << "int result = num1 + num2 * 3;" << endl;
 
cout << "What is the value of the variable `result`? " << endl;
 
cout << "a) 7.8" << endl;
 
cout << "b) 13" << endl;
 
cout << "c) 15" << endl;
 
cout << "d) 14" << endl;
 
cout << "e) none of the above" << endl;
 
cout << "Enter your answer: ";
 
cin >> Ans2;
 
if (Ans2 == 'b') {
 
cout << "Correct!" << endl;
 
trueCount++;
 
} else {
 
cout << "Wrong :(" << endl;
 
}
 
// Question 3
 
cout << "Consider the following C++ code:" << endl;
 
cout << "int num1 = 5;" << endl;
 
cout << "float num2 = 2.4;" << endl;
 
cout << "int result = (int)(num1 * num2) % 4;" << endl;
 
cout << "What is the value of the variable `result`? " << endl;
 
cout << "a) 0" << endl;
 
cout << "b) 1" << endl;
 
cout << "c) 2" << endl;
 
cout << "d) 3" << endl;
 
cout << "e) none of the above" << endl;
 
cout << "Enter your answer: ";
 
cin >> Ans3;
 
if (Ans3 == 'a') {
 
cout << "Correct!" << endl;
 
trueCount++;
 
} else {
 
cout << "Wrong :(" << endl;
 
}
 
// Question 4
 
cout << "Consider the following C++ code:" << endl;
 
cout << "int num1 = 4;" << endl;

 
cout << "float num2 = 3.5;" << endl;
 
cout << "int result = (int)(num1 + num2) >> 1;" << endl;
 
cout << "What is the value of the variable `result`? " << endl;
 
cout << "a) 3" << endl;
 
cout << "b) 4" << endl;
 
cout << "c) 7" << endl;
 
cout << "d) 8" << endl;
 
cout << "e) none of the above" << endl;
 
cout << "Enter your answer: ";
 
cin >> Ans4;
 
if (Ans4 == 'a') {
 
cout << "Correct!" << endl;
 
trueCount++;
 
} else {
 
cout << "Wrong :(" << endl;
 
}
 
// Question 5
 
cout << "Consider the following C++ code:" << endl;
 
cout << "int num1 = 10;" << endl;
 
cout << "float num2 = 4.5;" << endl;
 
cout << "int result = ((int)num2 ^ num1) & 7;" << endl;
 
cout << "What is the value of the variable `result`? " << endl;
 
cout << "a) 1" << endl;
 
cout << "b) 2" << endl;
 
cout << "c) 3" << endl;
 
cout << "d) 5" << endl;
 
cout << "e) none of the above" << endl;
 
cout << "Enter your answer: ";
 
cin >> Ans5;
 
if (Ans5 == 'e') {
 
cout << "Correct!" << endl;
 
trueCount++;
 
} else {
 
cout << "Wrong :(" << endl;
 
}
 
// Calculate Average
 
Average = (float)trueCount / 5 * 100;
 
// Calculate letter grade
 
if (Average >= 90)
 
Grade = 'A';
 
else if (Average >= 80)
 
Grade = 'B';
 
else if (Average >= 70)
 
Grade = 'C';
 
else if (Average >= 60)
 
Grade = 'D';
 
else
 
Grade = 'F';
 
// Output the result
 
cout << "You got " << trueCount << " question(s) correct." << endl;
 
cout << "Average = " << Average << "%" << endl;
 
cout << "Grade = " << Grade << endl;
 
return 0;
}