
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
 // Local variable declarations
 float numBoxes = 0.0;
 float vBox = 0.0;
 float vTruck = 0.0;
 float emptySpace = 0.0;
 float spaceUtil = 0.0;
 float boxHeight = 0.0;
 float boxWidth = 0.0;
 float boxLength = 0.0;
 float truckHeight = 0.0;
 float truckWidth = 0.0;
 float truckLength = 0.0;
 // Read input parameters
 cout << "Enter box height in inches: ";
 cin >> boxHeight;
 
 cout << "Enter box width in inches: ";
 cin >> boxWidth;
 
 cout << "Enter box length in inches: ";
 cin >> boxLength;
 
 cout << "Enter truck height in feet: ";
 cin >> truckHeight;
 
 cout << "Enter truck width in feet: ";
 cin >> truckWidth;
 
 cout << "Enter truck length in feet: ";
 cin >> truckLength;
 
// Conversion of feet to inches 
 
truckHeight = truckHeight * 12;
 
truckWidth = truckWidth * 12;
 
truckLength = truckLength * 12;
 
 // Calculate volume of the boxes
 vBox = boxHeight * boxWidth * boxLength;
 // Calculate volume of the truck
 vTruck = truckHeight * truckWidth * truckLength;
 
//Calculate how many boxes will fit in the truck
 
numBoxes = vTruck / vBox;
 
 
//Calculate how much space is left in truck
 
 
 
// Calculate how much space is being used
 
 
 // Print output
 cout << numBoxes << " boxes will fit inside of then truck" << endl;
 cout << "There will be " << emptySpace << " cu in of empty space." << endl;
 cout << spaceUtil << " % of the truck is being used." << endl;
 return 0;
}