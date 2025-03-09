#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 
// Local variable declarations
 
int numBoxes = 0;
 
int vBox = 0;
 
int vTruck = 0;
 
double spaceUtil = 0.0;
 
int emptyHeight, emptyWidth, emptyLength;
 
int boxHeight, boxWidth, boxLength;
 
int truckHeight, truckWidth, truckLength;
 
int entireHeight, entireWidth, entireLength;
 
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
 
truckHeight *= 12;
 
truckWidth *= 12;
 
truckLength *= 12;
 
// Calculate how many boxes fit in truck
 
entireHeight = truckHeight / boxHeight; // Total height
 
entireWidth = truckWidth / boxWidth; // Total width
 
entireLength = truckLength / boxLength; // Total length
 
numBoxes = entireLength * entireWidth * entireHeight;
 
//Calculate how much space is left in truck
 
emptyHeight = truckHeight - (entireHeight * boxHeight);
 
emptyWidth = truckWidth - (entireWidth * boxWidth);
 
emptyLength = truckLength - (entireLength * boxLength);
 
// Calculate how much space is being used
 
vBox = boxHeight * boxWidth * boxLength; // Calculate volume of the boxes
 
vTruck = truckHeight * truckWidth * truckLength; // Calculate volume of the truck
 
spaceUtil = ((static_cast<double>(numBoxes) * vBox) / vTruck) * 100;
 
// Print output
 
cout << numBoxes << " boxes will fit inside of then truck" << endl;
 
cout << "The space left on the truck is " << emptyHeight << " by " << emptyWidth << " by " << emptyLength << endl;
 
cout << fixed << setprecision(2) << spaceUtil << "% of the truck is being used." << endl; 
 
return 0;
}