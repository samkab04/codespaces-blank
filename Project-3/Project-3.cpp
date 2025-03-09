#include <cstdlib>
#include <iostream>
using namespace std;
// Ascii art (stolen from draw 3)
void solidSquare(int size) {
 
for (int row = 1; row <= size; row++) {
 
for (int col = 1; col <= size; col++) {
 
cout << "* ";
 
}
 
cout << endl;
 
}
} //Square
void verticalStripe(int size) {
 
for (int row = 1; row <= size; row++) {
 
for (int col = 1; col <= size; col++) {
 
if (col % 2 == 1)
 
cout << "* ";
 
else
 
cout << " ";
 
}
 
cout << endl;
 
}
} //Stripe
void letterF(int size) {
 
for (int row = 1; row <= size; row++) {
 
for (int col = 1; col <= size; col++) {
 
if (row == 1 || row == size / 2 || col == 1)
 
cout << "* ";
 
else
 
cout << " ";
 
}
 
cout << endl;
 
}
} //F
void letterT(int size) {
 
for (int row = 1; row <= size; row++) {
 
for (int col = 1; col <= size; col++) {
 
if (row == 1 || col == size / 2 + 1)
 
cout << "* ";
 
else
 
cout << " ";
 
}
 
cout << endl;
 
}
} //T
void letterZ(int size) {
 
for (int row = 1; row <= size; row++) {
 
for (int col = 1; col <= size; col++) {
 
if (row == 1 || row == size || col == size - row + 1)
 
cout << "* ";
 
else
 
cout << " ";
 
}
 
cout << endl;
 
}
} //Z
// Function to print the letter 'A'
void letterA(int size) {
for (int i = 0; i < size; i++) {
 
for (int j = 0; j < size; j++) {
 
if (i == 0 && (j > 0 && j < size - 1)) {
 
cout << "*";
 
} else if (j == 0 || j == size - 1) {
 
cout << "*";
 
} else if (i == size / 2) {
 
cout << "*";
 
} else {
 
cout << " ";
 
}
 
}
 
cout << endl;
 
}

}
// Function to print the letter 'R'
void letterR(int size) {
for (int i = 0; i < size; i++) {
 
for (int j = 0; j < size; j++) {
 
if (j == 0 || (i == 0 && j < size - 1) || (i == size / 2 && j < size - 1)) {
 
cout << "*";
 
} else if (j == size - 1 && i > 0 && i < size / 2) {
 
cout << "*";
 
} else if (i - j == size / 2) {
 
cout << "*";
 
} else {
 
cout << " ";
 
}
 
}
 
cout << endl;
 
}
}
int main()
{
 int size = 0;
 do {
 
//Get user input (stolen from input 4)
 
cout << "Enter size (5-20): ";
 
cin >> size;
 
 
//Checking validity of input
 
if (size < 5 || size > 20) {
 
cout << "Invalid size! Please enter a value between 5 and 20.\n";
 
}
 
} while (size < 5 || size > 20);
 
 
//Ouput the art
 
cout << "\nSolid Square Pattern:\n"; //Square
 
solidSquare(size);
 
 
cout << "\nVertical Stripe Pattern:\n"; //Stripe
 
verticalStripe(size);
 
 
cout << "\nLetter F Pattern:\n"; //F
 
letterF(size);
 
 
cout << "\nLetter T Pattern:\n"; //T
 
letterT(size);
 
 
cout << "\nLetter Z Pattern:\n"; //Z
 
letterZ(size);
 
 
cout << "\nLetter A Pattern:\n"; //A
 
letterA(size);
 
 
cout << "\nLetter R Pattern:\n"; //R
 
letterR(size);
 return 0;
}