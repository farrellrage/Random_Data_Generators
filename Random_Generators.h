//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Function Definitions:
//	GeneratePositiveIntegerFile
//	GenerateNegativeIntegerFile
//------------------------------------------------------------------------------
#ifndef Random_Generators_h
#define Random_Generators_h

#include "Main.h"

//------------------------------------------------------------------------------
//GeneratePositiveIntegerFile: Generates a plain-text file containing "quantity"
//	number of positive integers between "minValue" and "maxValue"
//--------------------------------------
//	quantity:
//		Number of positive integers to produce
//	minValue:
//		Lower limit of the produced integers (inclusive)
//	maxValue:
//		Upper limit of the produced integers (inclusive)
//------------------------------------------------------------------------------
void GeneratePositiveIntegerFile(int quantity, int minValue, int maxValue);

//------------------------------------------------------------------------------
//GenerateNegativeIntegerFile: Generates a plain-text file containing "quantity"
//	number of negative integers between "minValue" and "maxValue".
//	Treats the range of values as positives for simplicity, then makes values
//	negative before sending them to the output file.
//	Because of this, lowerLimit is really treated as the upper bound, and
//	upperLimit is treated as the lower bound.
//--------------------------------------
//	quantity:
//		Number of negative integers to produce.
//	lowerLimit:
//		Lower limit of the produced integers (inclusive).
//	upperLimit:
//		Upper limit of the produced integers (inclusive).
//------------------------------------------------------------------------------
void GenerateNegativeIntegerFile(int quantity, int lowerLimit, int upperLimit);


#endif // !Random_Generators_h