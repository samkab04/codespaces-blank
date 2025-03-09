
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
}
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
}
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
}
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
}
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
 
cout << "\nSolid Square Pattern:\n";

 
solidSquare(size);
 
 
cout << "\nVertical Stripe Pattern:\n";
 
verticalStripe(size);
 
 
cout << "\nLetter F Pattern:\n";
 
letterF(size);
 
 
cout << "\nLetter T Pattern:\n";
 
letterT(size);
 
 
cout << "\nLetter Z Pattern:\n";
 
letterZ(size);
 return 0;
}