//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Function Definitions:
//	GeneratePositiveIntegerFile
//	GenerateNegativeIntegerFile
//------------------------------------------------------------------------------
#include "Random_Generators.h"

//------------------------------------------------------------------------------
//GeneratePositiveIntegerFile: Generates a plain-text file containing "quantity"
//	number of positive integers between "minValue" and "maxValue".
//--------------------------------------
//	quantity:
//		Number of positive integers to produce.
//	minValue:
//		Lower limit of the produced integers (inclusive).
//	maxValue:
//		Upper limit of the produced integers (inclusive).
//------------------------------------------------------------------------------
void GeneratePositiveIntegerFile(int quantity, int minValue, int maxValue)
{
	//Declare and open an output file to send the generated integers to
	ofstream fout("PositiveIntegers.txt", ofstream::out);
	
#pragma region Error_Testing

	//Determine whether the given quantity value is less than 0
	if (quantity < 0)
	{
		//Output an error message to the console and output file
		cout << "GeneratePositiveIntegerFile: Error - Must specify a positive "
			<< "number of integers to generate" << endl;
		fout << "GeneratePositiveIntegerFile: Error - Must specify a positive "
			<< "number of integers to generate" << endl;

		//Close the output file
		fout.close();

		return;
	} // !if

	//If the given max value is negative, make it positive
	if (maxValue < 0) maxValue = (maxValue * -1);

	//If the given min value is negative, set min to 1
	if (minValue <= 0) minValue = 1;

	//If the given max value exceeds the limit, set max to the limit
	if (maxValue > RAND_MAX) maxValue = RAND_MAX;

	//If the given min value is greater than the given max value, set min to
	//the max value
	if (minValue > maxValue) minValue = maxValue;
	
#pragma endregion Error_Testing

	//Initialize the random number generator with the time
	srand((unsigned int)time(NULL));

	//For each integer to generate
	for (int index = 0; index < quantity; index++)
	{
		//Output a random positive integer between minValue and maxValue
		//inclusively
		fout << (rand() % ((maxValue - minValue) + 1) + minValue) << endl;
	} // !for
	
	//Close the output file
	fout.close();
} // !GeneratePositiveIntegerFile

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
void GenerateNegativeIntegerFile(int quantity, int lowerLimit, int upperLimit)
{
	//Declare and open an output file to send the generated integers to
	ofstream fout("NegativeIntegers.txt", ofstream::out);

#pragma region Error_Testing

	//Determine whether the given quantity value is less than 0
	if (quantity < 0)
	{
		//Output an error message to the console and output file
		cout << "GenerateNegativeIntegerFile: Error - Must specify a positive "
			<< "number of integers to generate" << endl;
		fout << "GenerateNegativeIntegerFile: Error - Must specify a positive "
			<< "number of integers to generate" << endl;

		//Close the output file
		fout.close();

		return;
	} // !if

	//If the given upper value is negative, make it positive
	if (lowerLimit < 0) lowerLimit = (lowerLimit * -1);

	//If the given lower value is negative, set min to 1
	if (upperLimit <= 0) upperLimit = 1;

	//If the given upper value exceeds the limit, set it to the limit
	if (lowerLimit > RAND_MAX) lowerLimit = RAND_MAX;

	//If the given lower value is greater than the given upper value, set the
	//lower value to the upper value
	if (upperLimit > lowerLimit) upperLimit = lowerLimit;

#pragma endregion Error_Testing

	//Initialize the random number generator with the time
	srand((unsigned int)time(NULL));

	//For each integer to generate
	for (int index = 0; index < quantity; index++)
	{
		//Output a random negative integer between lower value and upper value
		//inclusively
		fout << (-1 * (rand() % ((lowerLimit - upperLimit) + 1) + upperLimit))
			<< endl;
	} // !for

	  //Close the output file
	fout.close();
} // !GenerateNegativeIntegerFile

