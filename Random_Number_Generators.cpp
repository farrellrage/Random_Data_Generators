//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Function Definitions:
//	
//------------------------------------------------------------------------------
#include "Random_Generators.h"

//------------------------------------------------------------------------------
//GenerateIntegerFile: 
//--------------------------------------
//	quantity:
//		
//	minValue:
//		
//	maxValue:
//		
//------------------------------------------------------------------------------
void GeneratePositiveIntegerFile(int quantity, int minValue, int maxValue)
{
#pragma region Error_Testing

	//Determine whether the given max value exceeds the limit
	if (maxValue >= RAND_MAX)
	{
		//Use the limit as the max value
		maxValue = RAND_MAX;
	} // !if

	//Determine whether the given min value exceeds the limit
	if (minValue >= RAND_MAX)
	{
		//Set the min value to half the max value
		minValue = (int)(maxValue / 2);
	} // !if

	//Determine whether the given max value is negative
	if (maxValue < 0)
	{
		//Use the positive version of the given max value
		maxValue = (maxValue * -1);
	} // !if

	//Determine whether the given min value is negative
	if (minValue < 0)
	{
		//Use 0 as the min value
		minValue = 0;
	} // !if

	//Determine whether the given min value is greater than the given max value
	if (minValue >= maxValue)
	{
		//Set the min value to half the max value
		minValue = (int)(maxValue / 2);
	} // !if

#pragma endregion

	



} // !GenerateIntegerFile
